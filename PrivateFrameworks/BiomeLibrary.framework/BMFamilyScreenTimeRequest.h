
@interface BMFamilyScreenTimeRequest : BMEventBase <BMStoreData> {
    int  _approvalTime;
    NSString * _bundleID;
    bool  _hasIsActionUserDevice;
    bool  _hasRaw_eventTime;
    bool  _isActionUserDevice;
    double  _raw_eventTime;
    NSString * _requestID;
    int  _requestKind;
    NSString * _requesterDSID;
    NSString * _responderDSID;
    int  _status;
    NSString * _websitePath;
}

@property (nonatomic, readonly) int approvalTime;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventTime;
@property (nonatomic) bool hasIsActionUserDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActionUserDevice;
@property (nonatomic, readonly) NSString *requestID;
@property (nonatomic, readonly) int requestKind;
@property (nonatomic, readonly) NSString *requesterDSID;
@property (nonatomic, readonly) NSString *responderDSID;
@property (nonatomic, readonly) int status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *websitePath;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)approvalTime;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)eventTime;
- (bool)hasIsActionUserDevice;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithRequestID:(id)arg1 eventTime:(id)arg2 requesterDSID:(id)arg3 responderDSID:(id)arg4 requestKind:(int)arg5 status:(int)arg6 approvalTime:(int)arg7 websitePath:(id)arg8 bundleID:(id)arg9 isActionUserDevice:(id)arg10;
- (bool)isActionUserDevice;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)requestID;
- (int)requestKind;
- (id)requesterDSID;
- (id)responderDSID;
- (id)serialize;
- (void)setHasIsActionUserDevice:(bool)arg1;
- (int)status;
- (id)websitePath;
- (void)writeTo:(id)arg1;

@end
