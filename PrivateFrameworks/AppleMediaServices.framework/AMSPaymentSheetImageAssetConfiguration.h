
@interface AMSPaymentSheetImageAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration> {
    NSString * _filename;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)fileExtension;
- (id)filename;
- (id)initWithFilename:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 type:(long long)arg3;
- (struct CGSize { double x1; double x2; })size;
- (long long)type;

@end
