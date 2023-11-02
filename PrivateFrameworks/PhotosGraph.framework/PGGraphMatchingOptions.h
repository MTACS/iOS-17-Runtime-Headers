
@interface PGGraphMatchingOptions : NSObject {
    NSSet * _focusedNodes;
    bool  _needsKeywords;
    unsigned long long  _relatedType;
    NSArray * _sortDescriptors;
    unsigned short  _targetEventDomain;
}

@property (nonatomic, retain) NSSet *focusedNodes;
@property (nonatomic) bool needsKeywords;
@property (nonatomic) unsigned long long relatedType;
@property (nonatomic, retain) NSArray *sortDescriptors;
@property (nonatomic) unsigned short targetEventDomain;

+ (unsigned short)defaultTargetEventDomain;
+ (id)optionsWithRelatedType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)focusedNodes;
- (id)init;
- (bool)needsKeywords;
- (unsigned long long)relatedType;
- (void)setFocusedNodes:(id)arg1;
- (void)setNeedsKeywords:(bool)arg1;
- (void)setRelatedType:(unsigned long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setTargetEventDomain:(unsigned short)arg1;
- (id)sortDescriptors;
- (unsigned short)targetEventDomain;

@end
