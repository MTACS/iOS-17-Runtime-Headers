
@interface CKDetailsNavigationController : CKNavigationControllerAdaptivePresentationCollectionView {
    bool  _isDetached;
}

@property (nonatomic) bool isDetached;

- (bool)isDetached;
- (bool)isModalInPresentation;
- (void)setIsDetached:(bool)arg1;

@end
