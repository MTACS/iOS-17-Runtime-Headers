
@interface SFVisibleResultsFeedback : SFFeedback <NSCopying> {
    SFSearchResult * _goTakeoverResult;
    NSArray * _results;
    unsigned long long  _triggerEvent;
    NSArray * _uniqueIdentifiersOfVisibleCardSections;
    NSArray * _uniqueIdsOfVisibleButtons;
}

@property (nonatomic, retain) SFSearchResult *goTakeoverResult;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic, retain) NSArray *uniqueIdentifiersOfVisibleCardSections;
@property (nonatomic, retain) NSArray *uniqueIdsOfVisibleButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)goTakeoverResult;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (id)initWithResults:(id)arg1 triggerEvent:(unsigned long long)arg2 visibleButtons:(id)arg3 visibleCardSections:(id)arg4;
- (id)results;
- (void)setGoTakeoverResult:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (void)setUniqueIdentifiersOfVisibleCardSections:(id)arg1;
- (void)setUniqueIdsOfVisibleButtons:(id)arg1;
- (unsigned long long)triggerEvent;
- (id)uniqueIdentifiersOfVisibleCardSections;
- (id)uniqueIdsOfVisibleButtons;

@end
