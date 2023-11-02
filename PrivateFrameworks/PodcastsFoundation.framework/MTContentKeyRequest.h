
@interface MTContentKeyRequest : NSObject {
    void adamId;
    void keyIdentifier;
    void offlineRequest;
    void requestData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestDate;
    void requestID;
    void requestType;
    void secureInvalidationDsid;
}

@property (nonatomic, readonly) NSString *adamId;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, copy) NSData *requestData;
@property (nonatomic, readonly) NSNumber *secureInvalidationDsid;

- (void).cxx_destruct;
- (id)adamId;
- (id)copyWith:(long long)arg1;
- (id)init;
- (id)initFrom:(id)arg1 adamId:(id)arg2 requestType:(long long)arg3 offlineRequest:(bool)arg4;
- (id)initWithKeyIdentifier:(id)arg1 adamId:(id)arg2 requestType:(long long)arg3 offlineRequest:(bool)arg4 secureInvalidationDsid:(id)arg5;
- (id)keyIdentifier;
- (id)requestData;
- (id)secureInvalidationDsid;
- (void)setRequestData:(id)arg1;

@end
