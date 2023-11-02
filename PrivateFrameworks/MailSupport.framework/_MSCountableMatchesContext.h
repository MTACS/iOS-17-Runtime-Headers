
@interface _MSCountableMatchesContext : NSObject {
    NSMutableDictionary * _contactsCount;
    NSMutableSet * _highestMatches;
    long long  _maxCount;
}

@property (nonatomic, readonly) NSMutableSet *highestMatches;
@property (nonatomic) long long maxCount;

- (void).cxx_destruct;
- (void)countInstances:(id)arg1 usingPredicate:(id /* block */)arg2;
- (id)highestMatches;
- (id)init;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;

@end
