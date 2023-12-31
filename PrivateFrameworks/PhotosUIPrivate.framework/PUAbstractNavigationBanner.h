
@interface PUAbstractNavigationBanner : NSObject {
    <PUAbstractNavigationBannerDelegate> * _delegate;
}

@property (nonatomic) <PUAbstractNavigationBannerDelegate> *delegate;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)delegate;
- (double)height;
- (void)setDelegate:(id)arg1;
- (id)view;

@end
