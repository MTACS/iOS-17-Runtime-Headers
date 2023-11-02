
@interface PKPerformActionSelectItemExpiresHeader : UIView {
    UILabel * _leadingLabel;
    NSString * _leadingString;
    UILabel * _trailingLabel;
    NSString * _trailingString;
}

@property (nonatomic, retain) NSString *leadingString;
@property (nonatomic, retain) NSString *trailingString;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)leadingString;
- (void)setLeadingString:(id)arg1;
- (void)setTrailingString:(id)arg1;
- (id)trailingString;

@end
