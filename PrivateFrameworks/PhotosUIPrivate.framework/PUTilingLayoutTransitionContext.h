
@interface PUTilingLayoutTransitionContext : NSObject {
    NSObject<OS_dispatch_group> * _displayedContentUpdateGroup;
    bool  _isCancelingTransition;
    bool  _isUpdatingDisplayedContent;
    bool  _isViewControllerTransition;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *displayedContentUpdateGroup;
@property (setter=setCancelingTransition:, nonatomic) bool isCancelingTransition;
@property (nonatomic) bool isUpdatingDisplayedContent;
@property (nonatomic) bool isViewControllerTransition;

- (void).cxx_destruct;
- (id)displayedContentUpdateGroup;
- (bool)isCancelingTransition;
- (bool)isUpdatingDisplayedContent;
- (bool)isViewControllerTransition;
- (void)setCancelingTransition:(bool)arg1;
- (void)setDisplayedContentUpdateGroup:(id)arg1;
- (void)setIsUpdatingDisplayedContent:(bool)arg1;
- (void)setIsViewControllerTransition:(bool)arg1;

@end
