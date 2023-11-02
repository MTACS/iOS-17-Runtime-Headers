
@interface PGTitleSpec : NSObject {
    NSArray * _arguments;
    <PGTitleSpecDelegate> * _delegate;
    NSString * _format;
    bool  _hasLineBreak;
    bool  _hasSpecArgumentHandlingLineBreakBehavior;
    bool  _insertNonBreakableSpace;
    long long  _titleCategory;
    unsigned long long  _weekdayCriteria;
}

@property (retain) NSArray *arguments;
@property <PGTitleSpecDelegate> *delegate;
@property (readonly) NSString *format;
@property bool hasLineBreak;
@property bool hasSpecArgumentHandlingLineBreakBehavior;
@property bool insertNonBreakableSpace;
@property (readonly) long long titleCategory;
@property unsigned long long weekdayCriteria;

+ (long long)_weekdayForWeekdayCriteria:(unsigned long long)arg1;
+ (id)specWithFormat:(id)arg1 titleCategory:(long long)arg2;

- (void).cxx_destruct;
- (id)_appendArguments:(id)arg1 toFormatString:(id)arg2;
- (bool)_canFulfillWeekdayCriteriaWithMomentNodes:(id)arg1;
- (bool)_resolveRequiredInputForArgument:(id)arg1;
- (id)_titleWithResolvedArguments:(id)arg1;
- (id)arguments;
- (id)delegate;
- (id)description;
- (id)format;
- (bool)hasLineBreak;
- (bool)hasSpecArgumentHandlingLineBreakBehavior;
- (id)initWithFormat:(id)arg1 titleCategory:(long long)arg2;
- (bool)insertNonBreakableSpace;
- (void)setArguments:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasLineBreak:(bool)arg1;
- (void)setHasSpecArgumentHandlingLineBreakBehavior:(bool)arg1;
- (void)setInsertNonBreakableSpace:(bool)arg1;
- (void)setWeekdayCriteria:(unsigned long long)arg1;
- (long long)titleCategory;
- (id)titleWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)titleWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;
- (unsigned long long)weekdayCriteria;

@end
