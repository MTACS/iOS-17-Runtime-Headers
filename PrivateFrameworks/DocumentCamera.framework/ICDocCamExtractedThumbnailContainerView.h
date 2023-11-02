
@interface ICDocCamExtractedThumbnailContainerView : UIView {
    <ICDocCamExtractedThumbnailContainerViewDelegate> * _delegate;
}

@property (nonatomic) <ICDocCamExtractedThumbnailContainerViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)delegate;
- (bool)isAccessibilityElement;
- (bool)orderNextForAccessibility:(id)arg1;
- (bool)orderPreviousForAccessibility:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
