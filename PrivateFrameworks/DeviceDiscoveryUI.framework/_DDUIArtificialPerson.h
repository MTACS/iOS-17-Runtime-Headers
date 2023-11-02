
@interface _DDUIArtificialPerson : NSObject <DDUIPerson> {
    NSString * _accountIdentifier;
    NSString * _deviceModel;
    NSString * _identifier;
    NSString * _name;
    RPRemoteDisplayPerson * rapportPerson;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) RPRemoteDisplayPerson *rapportPerson;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)description;
- (id)deviceModel;
- (id)identifier;
- (id)initGuestPairPerson;
- (id)initSessionPairedPersonWithDevice:(id)arg1;
- (id)name;
- (id)rapportPerson;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
