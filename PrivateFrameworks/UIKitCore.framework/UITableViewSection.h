
@interface UITableViewSection : NSObject <NSCoding> {
    NSString * _footerTitle;
    UIView * _footerView;
    NSString * _headerTitle;
    UIView * _headerView;
    NSArray * _rows;
}

@property (nonatomic, copy) NSString *footerTitle;
@property (nonatomic, retain) UIView *footerView;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, copy) NSArray *rows;

+ (id)sectionWithRows:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)footerTitle;
- (id)footerView;
- (id)headerTitle;
- (id)headerView;
- (id)initWithCoder:(id)arg1;
- (id)rows;
- (void)setFooterTitle:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setRows:(id)arg1;

@end
