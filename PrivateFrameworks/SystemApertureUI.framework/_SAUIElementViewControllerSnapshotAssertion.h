
@interface _SAUIElementViewControllerSnapshotAssertion : SAAssertion <SAElementIdentifying, SAUISnapshotReasonProviding> {
    NSString * _clientIdentifier;
    NSString * _elementIdentifier;
    NSString * _snapshotReason;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *snapshotReason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (id)clientIdentifier;
- (id)elementIdentifier;
- (id)initWithElement:(id)arg1 snapshotReason:(id)arg2;
- (id)snapshotReason;

@end
