
@interface ASCredentialRequestSubPane : NSObject {
    double  _customSpacingAfter;
    UIView * _view;
}

@property (nonatomic) double customSpacingAfter;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)addToStackView:(id)arg1 withCustomSpacingAfter:(double)arg2 context:(id)arg3;
- (double)customSpacingAfter;
- (id)initWithView:(id)arg1;
- (void)setCustomSpacingAfter:(double)arg1;
- (id)view;

@end
