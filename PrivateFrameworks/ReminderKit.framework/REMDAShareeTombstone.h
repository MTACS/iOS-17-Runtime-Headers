
@interface REMDAShareeTombstone : NSObject <REMDAChangedIdentifierResult> {
    NSString * _address;
    NSString * _displayName;
    NSUUID * _objectIdentifier;
    NSUUID * _owningListIdentifier;
}

@property (nonatomic, retain) NSString *address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *objectIdentifier;
@property (nonatomic, retain) NSUUID *owningListIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (id)description;
- (id)displayName;
- (id)objectIdentifier;
- (id)owningListIdentifier;
- (void)setAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setObjectIdentifier:(id)arg1;
- (void)setOwningListIdentifier:(id)arg1;

@end
