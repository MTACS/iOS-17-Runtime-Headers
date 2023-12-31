
@interface _UIViewBaselineLoweringInfo : NSObject {
    double  _baselineOffset;
    UIView * _baselineView;
}

@property (nonatomic) double baselineOffset;
@property (nonatomic) UIView *baselineView;

- (double)baselineOffset;
- (id)baselineView;
- (id)description;
- (void)setBaselineOffset:(double)arg1;
- (void)setBaselineView:(id)arg1;

@end
