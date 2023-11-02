
@interface SignpostSupportExactProcessNameFilter : NSObject <SignpostPredicateProducer> {
    NSSet * _processNameSet;
}

@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) bool _wantsNotEqual;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;
@property (nonatomic, readonly) NSSet *processNameSet;

- (void).cxx_destruct;
- (unsigned long long)_compoundPredicateType;
- (bool)_wantsNotEqual;
- (void)addProcessName:(id)arg1;
- (void)addProcessNameSet:(id)arg1;
- (id)init;
- (bool)passesProcessName:(id)arg1;
- (id)predicateEquivalent;
- (id)processNameSet;

@end
