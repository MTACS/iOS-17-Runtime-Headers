
@interface CAMDisabledPreviewController : NSObject {
    NSMutableSet * __reasonsForDisablingPreview;
    <CAMDisabledPreviewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableSet *_reasonsForDisablingPreview;
@property (nonatomic) <CAMDisabledPreviewControllerDelegate> *delegate;
@property (getter=isPreviewDisabled, nonatomic, readonly) bool previewDisabled;

- (void).cxx_destruct;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_reasonsForDisablingPreview;
- (void)addDisabledPreviewReason:(long long)arg1;
- (id)delegate;
- (id)init;
- (bool)isPreviewDisabled;
- (void)removeDisabledPreviewReason:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
