
@interface EMFQueryResultOverride : NSObject {
    unsigned long long  _overrideBehavior;
    unsigned long long  _overrideSearchType;
    NSArray * _results;
}

@property (nonatomic, readonly) unsigned long long overrideBehavior;
@property (nonatomic, readonly) unsigned long long overrideSearchType;
@property (nonatomic, readonly) NSArray *results;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOverridesArray:(id)arg1 searchType:(unsigned long long)arg2 behavior:(unsigned long long)arg3;
- (unsigned long long)overrideBehavior;
- (unsigned long long)overrideSearchType;
- (id)results;

@end
