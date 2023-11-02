
@protocol SearchUITableHeaderViewDelegate <NSObject>

@required

- (NSString *)queryString;
- (void)toggleExpansionForSectionModel:(SearchUISectionModel *)arg1;

@optional

- (void)toggleExpansionForSection:(SFResultSection *)arg1;

@end
