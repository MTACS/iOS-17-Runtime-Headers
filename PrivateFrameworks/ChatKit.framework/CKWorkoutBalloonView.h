
@interface CKWorkoutBalloonView : CKLinkBalloonView {
    LPLinkMetadata * _metadata;
}

@property (nonatomic, retain) LPLinkMetadata *metadata;

- (void).cxx_destruct;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(bool)arg4;
- (id)metadata;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setMetadata:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;

@end
