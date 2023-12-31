
@protocol RUIHeader <NSObject>

@required

- (id)initWithAttributes:(NSDictionary *)arg1;

@optional

- (RUILinkLabel *)detailHeaderLabel;
- (double)headerHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (double)headerHeightForWidth:(double)arg1 inView:(UIView *)arg2;
- (UILabel *)headerLabel;
- (void)setDelegate:(id <RUIHeaderDelegate>)arg1;
- (void)setDetailText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setHTMLContent:(NSString *)arg1 toElementsMatchingQuery:(NSString *)arg2;
- (void)setIconImage:(UIImage *)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageLabelPadding:(double)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setSubHeaderText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setSubHeaderTopMargin:(double)arg1;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (UILabel *)subHeaderLabel;

@end
