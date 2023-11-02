
@interface DebugHierarchyCrawlerOptions : NSObject {
    long long  _groupVisibilityMask;
    NSArray * _groupingIdentifiers;
    bool  _groupingIdentifiersAreExclusive;
    unsigned long long  _maximumObjectCount;
    unsigned long long  _maximumObjectDepth;
    NSArray * _rootItems;
}

@property long long groupVisibilityMask;
@property (retain) NSArray *groupingIdentifiers;
@property bool groupingIdentifiersAreExclusive;
@property unsigned long long maximumObjectCount;
@property unsigned long long maximumObjectDepth;
@property (readonly) NSArray *rootItems;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (long long)groupVisibilityMask;
- (id)groupingIdentifiers;
- (bool)groupingIdentifiersAreExclusive;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)maximumObjectCount;
- (unsigned long long)maximumObjectDepth;
- (id)rootItems;
- (void)setGroupVisibilityMask:(long long)arg1;
- (void)setGroupingIdentifiers:(id)arg1;
- (void)setGroupingIdentifiers:(id)arg1 exclusive:(bool)arg2;
- (void)setGroupingIdentifiersAreExclusive:(bool)arg1;
- (void)setMaximumObjectCount:(unsigned long long)arg1;
- (void)setMaximumObjectDepth:(unsigned long long)arg1;
- (bool)shouldCrawlGroupWithID:(id)arg1;
- (bool)shouldCrawlObject:(id)arg1;

@end
