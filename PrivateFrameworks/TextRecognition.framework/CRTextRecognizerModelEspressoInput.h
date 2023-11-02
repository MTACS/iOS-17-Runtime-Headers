
@interface CRTextRecognizerModelEspressoInput : NSObject <CRTextRecognizerModelInput> {
    unsigned long long  _batchSize;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  _img_input;
    NSArray * _textFeatureInfo;
}

@property unsigned long long batchSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } img_input;
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (void)dealloc;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })img_input;
- (id)initWithImg_input:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 batchSize:(unsigned long long)arg2 featureInfo:(id)arg3;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setImg_input:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setTextFeatureInfo:(id)arg1;
- (id)textFeatureInfo;

@end
