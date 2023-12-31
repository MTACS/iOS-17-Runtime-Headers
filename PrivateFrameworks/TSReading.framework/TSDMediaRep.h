
@interface TSDMediaRep : TSDStyledRep {
    CALayer * mFrameMaskLayer;
    TSDFrameRep * mFrameRep;
    bool  mIsZooming;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLastPictureFrameLayerRect;
    CAShapeLayer * mMaskLayer;
    CAShapeLayer * mStrokeLayer;
    CALayer * mTapToReplaceLayer;
}

@property (nonatomic, readonly) TSDMediaInfo *mediaInfo;
@property (nonatomic, readonly) TSDMediaLayout *mediaLayout;
@property (nonatomic, readonly) bool shouldShowMediaReplaceUI;

- (void)addKnobsToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (bool)canResetMediaSize;
- (id)currentReplaceButtonHighlightedImage;
- (id)currentReplaceButtonImage;
- (void)dealloc;
- (void)didEndZooming;
- (bool)i_shouldRenderStroke:(id)arg1;
- (void)i_updateFrameRep;
- (bool)isPlaceholder;
- (id)mediaInfo;
- (id)mediaLayout;
- (id)overlayLayers;
- (void)p_addLayerForReplaceButtonToArray:(id)arg1;
- (struct CGSize { double x1; double x2; })p_replaceButtonSize;
- (struct CGPoint { double x1; double x2; })p_scaledPositionOfImageReplaceKnob;
- (id)p_tapToReplaceLayer;
- (void)p_updateTapToReplaceLayerPosition;
- (struct CGPoint { double x1; double x2; })positionOfHyperlinkKnob;
- (void)processChangedProperty:(int)arg1;
- (bool)replaceButtonContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldAllowReplacementFromDrop;
- (bool)shouldAllowReplacementFromPaste;
- (bool)shouldCreateKnobs;
- (bool)shouldShowMediaReplaceUI;
- (void)updatePositionsOfKnobs:(id)arg1;
- (id)visibleMediaReplaceButtonLayer;
- (void)willBeginZooming;

@end
