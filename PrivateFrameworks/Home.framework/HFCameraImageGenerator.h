
@interface HFCameraImageGenerator : NSObject {
    <HFCameraImageGeneratorDelegate> * _delegate;
    unsigned long long  _imagesExpected;
    NSString * _key;
}

@property (nonatomic) <HFCameraImageGeneratorDelegate> *delegate;
@property (nonatomic) unsigned long long imagesExpected;
@property (nonatomic, copy) NSString *key;

- (void).cxx_destruct;
- (id)delegate;
- (void)generateImagesFromAsset:(id)arg1 forOffsets:(id)arg2 atSize:(struct CGSize { double x1; double x2; })arg3 withKey:(id)arg4;
- (unsigned long long)imagesExpected;
- (id)initWithDelegate:(id)arg1;
- (id)key;
- (void)setDelegate:(id)arg1;
- (void)setImagesExpected:(unsigned long long)arg1;
- (void)setKey:(id)arg1;

@end
