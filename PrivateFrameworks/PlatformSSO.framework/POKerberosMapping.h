
@interface POKerberosMapping : NSObject {
    NSString * _clientNameKeyName;
    NSString * _encryptionKeyTypeKeyName;
    NSString * _messageBufferKeyName;
    NSString * _realmKeyName;
    NSString * _serviceNameKeyName;
    NSString * _sessionKeyKeyName;
    NSString * _ticketKeyPath;
}

@property (nonatomic, retain) NSString *clientNameKeyName;
@property (nonatomic, retain) NSString *encryptionKeyTypeKeyName;
@property (nonatomic, retain) NSString *messageBufferKeyName;
@property (nonatomic, retain) NSString *realmKeyName;
@property (nonatomic, retain) NSString *serviceNameKeyName;
@property (nonatomic, retain) NSString *sessionKeyKeyName;
@property (nonatomic, retain) NSString *ticketKeyPath;

- (void).cxx_destruct;
- (id)clientNameKeyName;
- (id)dictionaryRepresentation;
- (id)encryptionKeyTypeKeyName;
- (id)initWithDictionary:(id)arg1;
- (id)messageBufferKeyName;
- (id)realmKeyName;
- (id)serviceNameKeyName;
- (id)sessionKeyKeyName;
- (void)setClientNameKeyName:(id)arg1;
- (void)setEncryptionKeyTypeKeyName:(id)arg1;
- (void)setMessageBufferKeyName:(id)arg1;
- (void)setRealmKeyName:(id)arg1;
- (void)setServiceNameKeyName:(id)arg1;
- (void)setSessionKeyKeyName:(id)arg1;
- (void)setTicketKeyPath:(id)arg1;
- (id)ticketKeyPath;

@end
