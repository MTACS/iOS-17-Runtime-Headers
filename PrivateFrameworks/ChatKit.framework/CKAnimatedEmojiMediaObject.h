
@interface CKAnimatedEmojiMediaObject : CKAnimatedImageMediaObject

+ (id)UTITypes;
+ (bool)shouldScaleUpPreview;
+ (bool)shouldShadePreview;

- (id)attachmentSummary:(unsigned long long)arg1;
- (id)backgroundColorOverride;
- (id)icon;
- (Class)previewBalloonViewClass;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;

@end
