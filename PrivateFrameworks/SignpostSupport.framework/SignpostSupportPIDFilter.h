
@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer> {
    bool  __wantsNotEqual;
    NSSet * _pidSet;
}

@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) bool _wantsNotEqual;
@property (nonatomic, readonly) NSSet *pidSet;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;

- (void).cxx_destruct;
- (unsigned long long)_compoundPredicateType;
- (bool)_wantsNotEqual;
- (bool)_wantsNotSubsystem;
- (void)addPIDNumber:(id)arg1;
- (void)addPIDNumberSet:(id)arg1;
- (id)init;
- (bool)passesPIDNumber:(id)arg1;
- (id)pidSet;
- (id)predicateEquivalent;

@end
