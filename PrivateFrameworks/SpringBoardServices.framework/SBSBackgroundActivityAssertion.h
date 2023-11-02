
@interface SBSBackgroundActivityAssertion : NSObject <BSDescriptionProviding> {
    SBSBackgroundActivityAssertionData * _assertionData;
    id /* block */  _invalidationHandler;
}

@property (nonatomic, retain) SBSBackgroundActivityAssertionData *assertionData;
@property (nonatomic, readonly, copy) NSSet *backgroundActivityIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExclusive, nonatomic, readonly) bool exclusive;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) bool showsWhenForeground;
@property (nonatomic, copy) NSString *statusString;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)assertionWithBackgroundActivityIdentifier:(id)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
+ (id)assertionWithBackgroundActivityIdentifiers:(id)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
+ (id)backgroundLocationAssertionForPID:(int)arg1;

- (void).cxx_destruct;
- (void)acquireWithHandler:(id /* block */)arg1 invalidationHandler:(id /* block */)arg2;
- (void)acquireWithHandler:(id /* block */)arg1 onQueue:(id)arg2;
- (id)assertionData;
- (id)backgroundActivityIdentifiers;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithBackgroundActivityAssertionData:(id)arg1;
- (id)initWithBackgroundActivityIdentifiers:(id)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isExclusive;
- (int)pid;
- (void)setAssertionData:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setStatusString:(id)arg1;
- (bool)showsWhenForeground;
- (id)statusString;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;

@end
