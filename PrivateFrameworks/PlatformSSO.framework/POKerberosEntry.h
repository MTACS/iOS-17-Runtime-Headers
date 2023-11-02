
@interface POKerberosEntry : NSObject {
    NSString * _clientName;
    int  _encryptionKeyType;
    NSData * _messageBuffer;
    NSString * _realm;
    NSString * _serviceName;
    NSData * _sessionKey;
    NSString * _ticketKeyPath;
}

@property (nonatomic, retain) NSString *clientName;
@property (nonatomic) int encryptionKeyType;
@property (nonatomic, retain) NSData *messageBuffer;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSData *sessionKey;
@property (retain) NSString *ticketKeyPath;

- (void).cxx_destruct;
- (id)clientName;
- (id)dataRepresentation;
- (id)dictionaryRepresentation;
- (int)encryptionKeyType;
- (bool)hasAllRequiredValues;
- (id)initWithData:(id)arg1;
- (id)messageBuffer;
- (id)realm;
- (id)serviceName;
- (id)sessionKey;
- (void)setClientName:(id)arg1;
- (void)setEncryptionKeyType:(int)arg1;
- (void)setMessageBuffer:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSessionKey:(id)arg1;
- (void)setTicketKeyPath:(id)arg1;
- (id)ticketKeyPath;

@end
