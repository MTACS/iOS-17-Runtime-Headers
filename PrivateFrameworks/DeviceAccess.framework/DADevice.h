
@interface DADevice : NSObject <CUXPCCodable, NSCopying, NSSecureCoding> {
    double  _approveTime;
    NSUUID * _bluetoothIdentifier;
    NSDictionary * _endpoints;
    unsigned long long  _flags;
    NSString * _identifier;
    NSString * _mediaContentArtistName;
    NSString * _mediaContentTitle;
    long long  _mediaPlaybackState;
    NSString * _name;
    NSObject<OS_nw_endpoint> * _networkEndpoint;
    bool  _pendingRemoval;
    long long  _protocol;
    UTType * _protocolType;
    long long  _state;
    bool  _supportsGrouping;
    NSData * _txtRecordData;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic) double approveTime;
@property (nonatomic, retain) NSUUID *bluetoothIdentifier;
@property (nonatomic, copy) NSDictionary *endpoints;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mediaContentArtistName;
@property (nonatomic, copy) NSString *mediaContentTitle;
@property (nonatomic) long long mediaPlaybackState;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic, readonly, copy) NSString *nowPlayingSubtitle;
@property (nonatomic) bool pendingRemoval;
@property (nonatomic, readonly, copy) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) long long protocol;
@property (nonatomic, retain) UTType *protocolType;
@property (nonatomic) long long state;
@property (nonatomic) bool supportsGrouping;
@property (nonatomic, copy) NSData *txtRecordData;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *url;

// Image: /System/Library/PrivateFrameworks/DeviceAccess.framework/DeviceAccess

+ (bool)deviceMetadataURLValid:(id)arg1;
+ (void)mergePersistentDictionary:(id)arg1 into:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)approveTime;
- (id)bluetoothIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)endpoints;
- (unsigned long long)flags;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)mediaContentArtistName;
- (id)mediaContentTitle;
- (long long)mediaPlaybackState;
- (id)name;
- (id)networkEndpoint;
- (bool)pendingRemoval;
- (id)persistentDictionaryRepresentation;
- (long long)protocol;
- (id)protocolType;
- (void)setApproveTime:(double)arg1;
- (void)setBluetoothIdentifier:(id)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMediaContentArtistName:(id)arg1;
- (void)setMediaContentTitle:(id)arg1;
- (void)setMediaPlaybackState:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNetworkEndpoint:(id)arg1;
- (void)setPendingRemoval:(bool)arg1;
- (void)setProtocol:(long long)arg1;
- (void)setProtocolType:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsGrouping:(bool)arg1;
- (void)setTxtRecordData:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)state;
- (bool)supportsGrouping;
- (id)txtRecordData;
- (long long)type;
- (id)url;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (bool)isKnown;
- (id)nowPlayingSubtitle;

@end
