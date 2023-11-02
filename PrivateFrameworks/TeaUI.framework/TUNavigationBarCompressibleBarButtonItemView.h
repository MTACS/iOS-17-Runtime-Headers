
@interface TUNavigationBarCompressibleBarButtonItemView : NSObject <TUNavigationBarButtonItemCompressible> {
    UIView<TUNavigationBarButtonItemCompressible> * _customItemView;
    UIView * _regularItemView;
    double  contentAlpha;
}

@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) UIView<TUNavigationBarButtonItemCompressible> *customItemView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *regularItemView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (double)contentAlpha;
- (id)customItemView;
- (id)initWithCustomItemView:(id)arg1;
- (id)initWithRegularItemView:(id)arg1;
- (id)regularItemView;
- (void)setContentAlpha:(double)arg1;
- (id)view;

@end
