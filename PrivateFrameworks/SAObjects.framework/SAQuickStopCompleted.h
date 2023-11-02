
@interface SAQuickStopCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *categoryStopped;
@property (nonatomic, copy) NSNumber *confirmationRequired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

- (id)categoryStopped;
- (id)confirmationRequired;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCategoryStopped:(id)arg1;
- (void)setConfirmationRequired:(id)arg1;

@end
