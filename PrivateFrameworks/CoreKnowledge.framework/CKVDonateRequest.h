
@interface CKVDonateRequest : NSObject {
    CKVDonateConnection * _connection;
    NSObject<CKVDonateRequestDelegate> * _delegate;
    NSString * _deviceId;
    unsigned long long  _donationRequestHandlingSignpostId;
    unsigned long long  _donationRequestQueuedSignpostId;
    long long  _itemType;
    unsigned short  _options;
    NSString * _originAppId;
    unsigned int  _requestId;
    NSString * _userId;
    NSString * _validity;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly) unsigned short options;
@property (nonatomic, readonly) NSString *originAppId;
@property (nonatomic, readonly) unsigned int requestId;
@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) NSString *validity;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)_connectionTypeString;
- (void)_resolveOriginAppId:(id)arg1 itemType:(long long)arg2;
- (id)description;
- (id)deviceId;
- (void)handle;
- (bool)hasImplicitVersion;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 version:(unsigned long long)arg3 validity:(id)arg4 itemType:(long long)arg5 originAppId:(id)arg6 deviceId:(id)arg7 userId:(id)arg8 options:(unsigned short)arg9;
- (void)interrupt;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDonateRequest:(id)arg1;
- (bool)isIncremental;
- (bool)isMultiUserCompanion;
- (bool)isOrdered;
- (long long)itemType;
- (unsigned short)options;
- (id)originAppId;
- (unsigned int)requestId;
- (void)terminateWithOptions:(unsigned short)arg1 terminationType:(long long)arg2;
- (id)userId;
- (id)validity;
- (unsigned long long)version;

@end
