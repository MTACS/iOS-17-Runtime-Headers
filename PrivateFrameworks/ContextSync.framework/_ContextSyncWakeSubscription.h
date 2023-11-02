
@interface _ContextSyncWakeSubscription : NSObject {
    NSMutableDictionary * _DSLtoWakeSubscription;
}

@property (nonatomic, retain) NSMutableDictionary *DSLtoWakeSubscription;

+ (id)wakeSubscription;
+ (id)wakeSubscription:(bool)arg1 forIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)DSLtoWakeSubscription;
- (bool)addIdentifier:(id)arg1 withWake:(bool)arg2;
- (bool)existsIdentifier:(id)arg1;
- (bool)hasWakingIdentifier;
- (id)identifiers;
- (bool)isIdentifierWaking:(id)arg1;
- (id)lastChangeDateForIdentifier:(id)arg1;
- (bool)removeIdentifier:(id)arg1;
- (void)setDSLtoWakeSubscription:(id)arg1;
- (id)wakeStateWithIdentifier:(id)arg1;

@end
