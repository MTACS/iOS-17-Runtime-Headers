
@interface MPSectionedIdentifierListReverseEnumerator : NSEnumerator {
    NSMutableArray * _contexts;
    MPSectionedIdentifierListEntry * _endEntry;
    NSMutableArray * _entriesToEmit;
    NSMutableArray * _nextEmittableEnumerationResults;
    unsigned long long  _options;
    MPSectionedIdentifierList * _sectionedIdentifierList;
    _MPSectionedIdentifierListProxyEntry * _startEntryProxy;
}

@property (nonatomic, retain) NSMutableArray *contexts;
@property (nonatomic, retain) MPSectionedIdentifierListEntry *endEntry;
@property (nonatomic, retain) NSMutableArray *entriesToEmit;
@property (nonatomic, retain) NSMutableArray *nextEmittableEnumerationResults;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) MPSectionedIdentifierList *sectionedIdentifierList;

- (void).cxx_destruct;
- (id)_startEntryProxy;
- (id)contexts;
- (id)endEntry;
- (id)entriesToEmit;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startEntry:(id)arg3 endEntry:(id)arg4 withExclusiveAccessToken:(id)arg5;
- (id)nextEmittableEnumerationResults;
- (id)nextObject;
- (id)nextObjectWithExclusiveAccessToken:(id)arg1;
- (unsigned long long)options;
- (id)sectionedIdentifierList;
- (void)setContexts:(id)arg1;
- (void)setEndEntry:(id)arg1;
- (void)setEntriesToEmit:(id)arg1;
- (void)setNextEmittableEnumerationResults:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
