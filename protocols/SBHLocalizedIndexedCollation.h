
@protocol SBHLocalizedIndexedCollation <NSObject>

@required

- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
- (NSArray *)sectionIndexTitles;
- (NSArray *)sectionTitles;
- (NSArray *)sortedArrayFromArray:(NSArray *)arg1 collationStringSelector:(SEL)arg2;

@end
