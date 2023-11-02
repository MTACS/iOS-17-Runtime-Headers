
@interface PKSharingIDSManagerHandlerConfiguration : NSObject {
    unsigned long long  _accessLevel;
    NSString * _accountIdentifier;
    NSString * _altDSID;
    NSString * _handle;
    unsigned long long  _sharingGroup;
}

@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, readonly) unsigned long long sharingGroup;

- (void).cxx_destruct;
- (unsigned long long)accessLevel;
- (id)accountIdentifier;
- (id)altDSID;
- (id)description;
- (id)handle;
- (id)initWithSharingGroup:(unsigned long long)arg1;
- (void)setAccessLevel:(unsigned long long)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setHandle:(id)arg1;
- (unsigned long long)sharingGroup;

@end
