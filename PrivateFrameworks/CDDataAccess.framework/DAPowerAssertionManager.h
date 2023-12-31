
@interface DAPowerAssertionManager : NSObject {
    NSMapTable * _contextToGroupIdentifier;
    NSMapTable * _contextToPowerAssertionRef;
    NSCountedSet * _contexts;
    NSMapTable * _groupIdentifierToContexts;
    NSCountedSet * _heldAsideContexts;
    NSMutableSet * _heldAsideGroupIdentifiers;
}

@property (nonatomic, retain) NSMapTable *contextToGroupIdentifier;
@property (nonatomic, retain) NSMapTable *contextToPowerAssertionRef;
@property (nonatomic, retain) NSCountedSet *contexts;
@property (nonatomic, retain) NSMapTable *groupIdentifierToContexts;
@property (nonatomic, retain) NSCountedSet *heldAsideContexts;
@property (nonatomic, retain) NSMutableSet *heldAsideGroupIdentifiers;

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)arg1;

- (void).cxx_destruct;
- (bool)_releaseAssertionForContext:(id)arg1;
- (bool)_retainAssertionForContext:(id)arg1;
- (id)contextToGroupIdentifier;
- (id)contextToPowerAssertionRef;
- (id)contexts;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (id)groupIdentifierToContexts;
- (id)heldAsideContexts;
- (id)heldAsideGroupIdentifiers;
- (id)init;
- (unsigned long long)powerAssertionRetainCount:(id)arg1;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)releasePowerAssertion:(id)arg1;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)setContextToGroupIdentifier:(id)arg1;
- (void)setContextToPowerAssertionRef:(id)arg1;
- (void)setContexts:(id)arg1;
- (void)setGroupIdentifierToContexts:(id)arg1;
- (void)setHeldAsideContexts:(id)arg1;
- (void)setHeldAsideGroupIdentifiers:(id)arg1;
- (id)stateString;

@end
