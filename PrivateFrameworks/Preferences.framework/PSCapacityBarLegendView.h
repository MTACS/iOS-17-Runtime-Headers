
@interface PSCapacityBarLegendView : UIView {
    PSLegendColorView * _legendColor;
    UILabel * _legendLabel;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)color;
- (void)createConstraints;
- (id)initWithCapacityBarCategory:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (id)textColor;

@end
