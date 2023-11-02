
@protocol MPShuffleableSectionedIdentifierListDataSource <MPSectionedIdentifierListDataSource>

@required

- (bool)section:(NSString *)arg1 supportsShuffleType:(long long)arg2;

@optional

- (bool)section:(NSString *)arg1 shouldShuffleExcludeItem:(NSString *)arg2;

@end
