
@interface AVTAvatarAttributeEditorPreviewMode : NSObject {
    AVTAvatarAttributeEditorPreviewModeOptions * _options;
    unsigned long long  _type;
}

@property (nonatomic, readonly) AVTAvatarAttributeEditorPreviewModeOptions *options;
@property (nonatomic, readonly) unsigned long long type;

+ (unsigned long long)attributeEditorPreviewModeTypeForEditingPreviewModeType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 options:(id)arg2;
- (id)options;
- (unsigned long long)type;

@end
