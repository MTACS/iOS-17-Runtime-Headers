
@interface _MFCountableMatchesContext : NSObject {
    long long  _maxCount;
    struct __CFDictionary { } * _peopleCount;
    NSMutableSet * _popularPeople;
}

@property (nonatomic) long long maxCount;

- (void).cxx_destruct;
- (void)countInstances:(id)arg1 usingPredicate:(id /* block */)arg2;
- (void)dealloc;
- (id)highestMatches;
- (id)init;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;

@end
