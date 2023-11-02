
@interface SUCellConfigurationContext : NSObject {
    long long  _tableViewStyle;
}

@property (nonatomic) long long tableViewStyle;

- (void)resetLayoutCaches;
- (void)setTableViewStyle:(long long)arg1;
- (long long)tableViewStyle;

@end
