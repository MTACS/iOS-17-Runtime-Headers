
@interface POKerberosStatus : NSObject <NSSecureCoding> {
    NSString * _cacheName;
    bool  _exchangeRequired;
    bool  _failedToConnect;
    bool  _importSuccessful;
    NSString * _realm;
    NSString * _ticketKeyPath;
    NSString * _upn;
}

@property (retain) NSString *cacheName;
@property bool exchangeRequired;
@property bool failedToConnect;
@property bool importSuccessful;
@property (retain) NSString *realm;
@property (retain) NSString *ticketKeyPath;
@property (retain) NSString *upn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheName;
- (id)dataRepresentation;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)exchangeRequired;
- (bool)failedToConnect;
- (bool)importSuccessful;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)realm;
- (void)setCacheName:(id)arg1;
- (void)setExchangeRequired:(bool)arg1;
- (void)setFailedToConnect:(bool)arg1;
- (void)setImportSuccessful:(bool)arg1;
- (void)setRealm:(id)arg1;
- (void)setTicketKeyPath:(id)arg1;
- (void)setUpn:(id)arg1;
- (id)ticketKeyPath;
- (id)upn;

@end
