
@interface SignpostSupportUniquePIDFilter : NSObject <SignpostPredicateProducer> {
    NSSet * _uniquePidSet;
}

@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) bool _wantsNotEqual;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;
@property (nonatomic, readonly) NSSet *uniquePidSet;

- (void).cxx_destruct;
- (unsigned long long)_compoundPredicateType;
- (bool)_wantsNotEqual;
- (void)addUniquePIDNumber:(id)arg1;
- (void)addUniquePIDNumberSet:(id)arg1;
- (id)init;
- (bool)passesUniquePIDNumber:(id)arg1;
- (id)predicateEquivalent;
- (id)uniquePidSet;

@end
