
@interface KTLoggableData : NSObject <NSSecureCoding> {
    NSString * _build;
    NSData * _clientData;
    NSData * _clientDataHash;
    NSData * _deviceID;
    NSData * _deviceIdHash;
    NSError * _failure;
    bool  _ktCapable;
    bool  _marked;
    bool  _notInSyncedData;
    NSString * _product;
    unsigned long long  _result;
    NSData * _signature;
    bool  _successfulSync;
    NSNumber * _version;
}

@property (copy) NSString *build;
@property (retain) NSData *clientData;
@property (retain) NSData *clientDataHash;
@property (copy) NSData *deviceID;
@property (retain) NSData *deviceIdHash;
@property (retain) NSError *failure;
@property bool ktCapable;
@property bool marked;
@property bool notInSyncedData;
@property (copy) NSString *product;
@property unsigned long long result;
@property (copy) NSData *signature;
@property bool successfulSync;
@property (copy) NSNumber *version;

+ (bool)isAccountKTCapable:(id)arg1;
+ (void)loggableDataForDeviceID:(id)arg1 application:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)loggableDataForDeviceID:(id)arg1 completionBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)build;
- (id)clientData;
- (id)clientDataHash;
- (id)debugDescription;
- (id)description;
- (id)deviceID;
- (id)deviceIdHash;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)failure;
- (id)initWithClientData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)ktCapable;
- (bool)marked;
- (bool)notInSyncedData;
- (id)product;
- (unsigned long long)result;
- (void)setBuild:(id)arg1;
- (void)setClientData:(id)arg1;
- (void)setClientDataHash:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceIdHash:(id)arg1;
- (void)setFailure:(id)arg1;
- (void)setKtCapable:(bool)arg1;
- (void)setMarked:(bool)arg1;
- (void)setNotInSyncedData:(bool)arg1;
- (void)setProduct:(id)arg1;
- (void)setResult:(unsigned long long)arg1;
- (void)setSignature:(id)arg1;
- (void)setSuccessfulSync:(bool)arg1;
- (void)setVersion:(id)arg1;
- (id)shortDescription;
- (id)signature;
- (bool)successfulSync;
- (id)version;

@end
