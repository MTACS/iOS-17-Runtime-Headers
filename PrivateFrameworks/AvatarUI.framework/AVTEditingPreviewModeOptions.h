
@interface AVTEditingPreviewModeOptions : NSObject {
    NSString * _bodyPosePack;
    NSString * _framingMode;
}

@property (nonatomic, readonly) NSString *bodyPosePack;
@property (nonatomic, readonly) NSString *framingMode;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)bodyPosePack;
- (id)description;
- (id)framingMode;
- (id)initWithFramingMode:(id)arg1 bodyPosePack:(id)arg2;

@end
