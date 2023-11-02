
@interface DDDevice : NSObject <CUXPCCodable, NSCopying, NSSecureCoding> {
    double  _approveTime;
    NSUUID * _bluetoothIdentifier;
    long long  _category;
    NSString * _displayName;
    NSString * _identifier;
    NSString * _mediaContentSubtitle;
    NSString * _mediaContentTitle;
    long long  _mediaPlaybackState;
    NSObject<OS_nw_endpoint> * _networkEndpoint;
    long long  _protocol;
    UTType * _protocolType;
    long long  _state;
    bool  _supportsGrouping;
    NSData * _txtRecordData;
    NSURL * _url;
}

@property (nonatomic) double approveTime;
@property (nonatomic, retain) NSUUID *bluetoothIdentifier;
@property (nonatomic) long long category;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mediaContentSubtitle;
@property (nonatomic, copy) NSString *mediaContentTitle;
@property (nonatomic) long long mediaPlaybackState;
@property (nonatomic, retain) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic, readonly, copy) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) long long protocol;
@property (nonatomic, retain) UTType *protocolType;
@property (nonatomic) long long state;
@property (nonatomic) bool supportsGrouping;
@property (nonatomic, copy) NSData *txtRecordData;
@property (nonatomic, copy) NSURL *url;

+ (bool)deviceMetadataURLValid:(id)arg1;
+ (void)mergePersistentDictionary:(id)arg1 into:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)approveTime;
- (id)bluetoothIdentifier;
- (long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createDADevice;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 category:(long long)arg2 protocolType:(id)arg3 identifier:(id)arg4;
- (id)initWithPersistentDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)mediaContentSubtitle;
- (id)mediaContentTitle;
- (long long)mediaPlaybackState;
- (id)networkEndpoint;
- (id)persistentDictionaryRepresentation;
- (long long)protocol;
- (id)protocolType;
- (void)setApproveTime:(double)arg1;
- (void)setBluetoothIdentifier:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMediaContentSubtitle:(id)arg1;
- (void)setMediaContentTitle:(id)arg1;
- (void)setMediaPlaybackState:(long long)arg1;
- (void)setNetworkEndpoint:(id)arg1;
- (void)setProtocol:(long long)arg1;
- (void)setProtocolType:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsGrouping:(bool)arg1;
- (void)setTxtRecordData:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)state;
- (bool)supportsGrouping;
- (id)txtRecordData;
- (id)url;

@end
