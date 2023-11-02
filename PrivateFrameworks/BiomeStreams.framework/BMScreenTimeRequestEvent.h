
@interface BMScreenTimeRequestEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    int  _approvalTime;
    NSString * _bundleID;
    double  _eventTime;
    bool  _isActionUserDevice;
    int  _kind;
    NSString * _requestID;
    NSString * _requesterDSID;
    NSString * _responderDSID;
    int  _status;
    NSString * _websitePath;
}

@property (nonatomic) int approvalTime;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double eventTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActionUserDevice;
@property (nonatomic) int kind;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) NSString *requesterDSID;
@property (nonatomic, copy) NSString *responderDSID;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *websitePath;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (int)approvalTime;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (double)eventTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithRequestID:(id)arg1 kind:(int)arg2 status:(int)arg3 eventTime:(double)arg4 approvalTime:(int)arg5 requesterDSID:(id)arg6 responderDSID:(id)arg7 websitePath:(id)arg8 bundleID:(id)arg9;
- (id)initWithRequestID:(id)arg1 kind:(int)arg2 status:(int)arg3 eventTime:(double)arg4 approvalTime:(int)arg5 requesterDSID:(id)arg6 responderDSID:(id)arg7 websitePath:(id)arg8 bundleID:(id)arg9 isActionUserDevice:(bool)arg10;
- (bool)isActionUserDevice;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (int)kind;
- (id)proto;
- (id)requestID;
- (id)requesterDSID;
- (id)responderDSID;
- (id)serialize;
- (void)setApprovalTime:(int)arg1;
- (void)setBundleID:(id)arg1;
- (void)setEventTime:(double)arg1;
- (void)setIsActionUserDevice:(bool)arg1;
- (void)setKind:(int)arg1;
- (void)setRequestID:(id)arg1;
- (void)setRequesterDSID:(id)arg1;
- (void)setResponderDSID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setWebsitePath:(id)arg1;
- (int)status;
- (bool)validNonOptionalProperty:(id)arg1 propertyName:(id)arg2;
- (id)websitePath;

@end
