
@interface PGTitleGeneratorDateMatching : NSObject {
    NSSet * _dateNodes;
    PGGraph * _graph;
    NSString * _holidayName;
    bool  _isForHighlight;
    unsigned long long  _lineBreakBehavior;
    NSSet * _momentNodes;
    NSDateInterval * _referenceDateInterval;
    PGTitleGenerationContext * _titleGenerationContext;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long allowedTimeTitleFormats;
@property (nonatomic, retain) NSSet *dateNodes;
@property (nonatomic, retain) PGGraph *graph;
@property (nonatomic, readonly) bool isForHighlight;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) NSDateInterval *referenceDateInterval;
@property (nonatomic, readonly) PGTitle *title;
@property (nonatomic, readonly) long long type;

+ (id)_typeMatchings;
+ (bool)type:(long long)arg1 isBetterThanType:(long long)arg2;

- (void).cxx_destruct;
- (bool)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;
- (long long)_findBestType;
- (long long)_matchingTypeForDateNode:(id)arg1;
- (unsigned long long)allowedTimeTitleFormats;
- (id)dateNodes;
- (id)graph;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 highlightNode:(id)arg3 titleGenerationContext:(id)arg4;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 lineBreakBehavior:(unsigned long long)arg4 isForHighlight:(bool)arg5 titleGenerationContext:(id)arg6;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 titleGenerationContext:(id)arg4;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 titleGenerationContext:(id)arg4 holidayName:(id)arg5 isForHighlight:(bool)arg6;
- (bool)isForHighlight;
- (unsigned long long)lineBreakBehavior;
- (id)momentNodes;
- (id)referenceDateInterval;
- (void)setDateNodes:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setLineBreakBehavior:(unsigned long long)arg1;
- (id)title;
- (long long)type;

@end
