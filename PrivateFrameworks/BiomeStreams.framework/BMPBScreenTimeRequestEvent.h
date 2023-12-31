
@interface BMPBScreenTimeRequestEvent : PBCodable <NSCopying> {
    int  _approvalTime;
    NSString * _bundleID;
    double  _eventTime;
    struct { 
        unsigned int eventTime : 1; 
        unsigned int approvalTime : 1; 
        unsigned int kind : 1; 
        unsigned int status : 1; 
        unsigned int isActionUserDevice : 1; 
    }  _has;
    bool  _isActionUserDevice;
    int  _kind;
    NSString * _requestID;
    NSString * _requesterDSID;
    NSString * _responderDSID;
    int  _status;
    NSString * _websitePath;
}

@property (nonatomic) int approvalTime;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) double eventTime;
@property (nonatomic) bool hasApprovalTime;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasEventTime;
@property (nonatomic) bool hasIsActionUserDevice;
@property (nonatomic) bool hasKind;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic, readonly) bool hasRequesterDSID;
@property (nonatomic, readonly) bool hasResponderDSID;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasWebsitePath;
@property (nonatomic) bool isActionUserDevice;
@property (nonatomic) int kind;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic, retain) NSString *requesterDSID;
@property (nonatomic, retain) NSString *responderDSID;
@property (nonatomic) int status;
@property (nonatomic, retain) NSString *websitePath;

- (void).cxx_destruct;
- (int)StringAsApprovalTime:(id)arg1;
- (int)StringAsKind:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)approvalTime;
- (id)approvalTimeAsString:(int)arg1;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eventTime;
- (bool)hasApprovalTime;
- (bool)hasBundleID;
- (bool)hasEventTime;
- (bool)hasIsActionUserDevice;
- (bool)hasKind;
- (bool)hasRequestID;
- (bool)hasRequesterDSID;
- (bool)hasResponderDSID;
- (bool)hasStatus;
- (bool)hasWebsitePath;
- (unsigned long long)hash;
- (bool)isActionUserDevice;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (id)kindAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (id)requesterDSID;
- (id)responderDSID;
- (void)setApprovalTime:(int)arg1;
- (void)setBundleID:(id)arg1;
- (void)setEventTime:(double)arg1;
- (void)setHasApprovalTime:(bool)arg1;
- (void)setHasEventTime:(bool)arg1;
- (void)setHasIsActionUserDevice:(bool)arg1;
- (void)setHasKind:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIsActionUserDevice:(bool)arg1;
- (void)setKind:(int)arg1;
- (void)setRequestID:(id)arg1;
- (void)setRequesterDSID:(id)arg1;
- (void)setResponderDSID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setWebsitePath:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)websitePath;
- (void)writeTo:(id)arg1;

@end
