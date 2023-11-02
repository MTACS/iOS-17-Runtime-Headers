
@interface _DDUIRapportDevice : NSObject <DDUIDevice> {
    NSString * _accountIdentifier;
    unsigned int  _deviceType;
    NSString * _identifier;
    bool  _isMine;
    NSString * _model;
    NSString * _name;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isMine;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)description;
- (unsigned int)deviceType;
- (id)identifier;
- (id)initWithIncomingMessageOptions:(id)arg1;
- (id)initWithRPCompanionLinkDevice:(id)arg1;
- (bool)isMine;
- (id)model;
- (id)name;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDeviceType:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsMine:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;

@end
