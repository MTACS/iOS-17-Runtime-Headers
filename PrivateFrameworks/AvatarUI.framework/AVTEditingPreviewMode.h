
@interface AVTEditingPreviewMode : NSObject {
    AVTEditingPreviewModeOptions * _options;
    unsigned long long  _type;
}

@property (nonatomic, readonly) AVTEditingPreviewModeOptions *options;
@property (nonatomic, readonly) unsigned long long type;

+ (id)defaultPreviewMode;
+ (unsigned long long)previewModeTypeForString:(id)arg1;
+ (id)stringForPreviewModeType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 options:(id)arg2;
- (id)options;
- (unsigned long long)type;

@end
