
@interface SBHLocalizedIndexedCollationStrategy : NSObject <SBHLocalizedIndexedCollation> {
    NSArray * _appendedSections;
    NSArray * _cachedSectionIndexTitles;
    NSArray * _cachedSectionTitles;
    UILocalizedIndexedCollation * _currentCollation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;
@property (nonatomic, readonly) NSArray *sectionTitles;
@property (readonly) Class superclass;

+ (id)defaultCollationStrategy;
+ (id)defaultSectionIndexTitles;
+ (id)defaultSectionTitles;
+ (id)dimSumCollationStrategy;
+ (id)myCurrentCollation;
+ (void)prewarm;

- (void).cxx_destruct;
- (id)appendedSectionTitles;
- (bool)containsSection:(id)arg1;
- (id)initWithAdditionalSections:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;

@end
