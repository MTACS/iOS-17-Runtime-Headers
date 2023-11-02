
@interface _SBSystemApertureRestrictionServerAssertionWrapper : BSSimpleAssertion {
    BSServiceConnection * _associatedConnection;
    NSString * _invalidationReason;
    <SAInvalidatable> * _wrappedAssertion;
}

@property (nonatomic) BSServiceConnection *associatedConnection;
@property (nonatomic, copy) NSString *invalidationReason;
@property (nonatomic, retain) <SAInvalidatable> *wrappedAssertion;

- (void).cxx_destruct;
- (id)associatedConnection;
- (id)invalidationReason;
- (void)setAssociatedConnection:(id)arg1;
- (void)setInvalidationReason:(id)arg1;
- (void)setWrappedAssertion:(id)arg1;
- (id)wrappedAssertion;

@end
