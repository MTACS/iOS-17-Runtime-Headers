
@interface NTKColorCodeTimeView : UIView {
    NSCalendar * _cal;
    NSArray * _colorViews;
    NSDate * _date;
    NSArray * _digitToColor;
}

@property (nonatomic, retain) NSDate *date;

- (void).cxx_destruct;
- (id)date;
- (id)init;
- (void)layoutSubviews;
- (void)setDate:(id)arg1;

@end
