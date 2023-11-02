
@interface CDPUICustodianOSSelectionViewModel : NSObject <NSCopying> {
    NSArray * _escapeOffers;
    UIImage * _icon;
    NSString * _message;
    NSArray * _options;
    long long  _tableViewStyle;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *escapeOffers;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic) long long tableViewStyle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)escapeOffers;
- (id)icon;
- (id)message;
- (id)options;
- (void)setEscapeOffers:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTableViewStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)tableViewStyle;
- (id)title;

@end
