
@interface PKPayLaterScheduleHorizontalStack : NSObject {
    NSMutableArray * _allViews;
    PKConnectedCircleView * _circleView;
    UILabel * _leadingLabel;
    NSString * _leadingText;
    unsigned long long  _stackIndex;
    UILabel * _trailingLabel;
    NSString * _trailingText;
}

@property (nonatomic, retain) PKConnectedCircleView *circleView;
@property (nonatomic, retain) UILabel *leadingLabel;
@property (nonatomic, retain) UILabel *trailingLabel;

- (void).cxx_destruct;
- (void)_configureViews;
- (id)_greyGradientConnector;
- (id)allViews;
- (id)circleView;
- (id)initWithLeadingText:(id)arg1 trailingText:(id)arg2 stackIndex:(unsigned long long)arg3;
- (id)leadingLabel;
- (double)minimumLeadingLabelWidth;
- (void)setCircleView:(id)arg1;
- (void)setLeadingLabel:(id)arg1;
- (void)setTrailingLabel:(id)arg1;
- (id)trailingLabel;

@end
