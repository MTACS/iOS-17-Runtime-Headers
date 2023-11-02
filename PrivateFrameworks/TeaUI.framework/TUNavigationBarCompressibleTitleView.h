
@interface TUNavigationBarCompressibleTitleView : NSObject <TUNavigationBarCompressible> {
    UIView<TUNavigationBarCompressible> * _customTitleView;
    UILabel * _regularTitleView;
    double  contentAlpha;
}

@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) UIView<TUNavigationBarCompressible> *customTitleView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *regularTitleView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (double)contentAlpha;
- (id)customTitleView;
- (id)initWithCustomTitleView:(id)arg1;
- (id)initWithRegularTitleView:(id)arg1;
- (id)regularTitleView;
- (void)setContentAlpha:(double)arg1;
- (id)view;

@end
