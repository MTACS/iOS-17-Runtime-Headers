
@interface IMReadReceiptPipelineParameter : NSObject <IMFindAccountProcessingParameter, IMMessageFromStorageParameter, IMReadReceiptProcessingParameter> {
    NSString * _GUID;
    IMDAccount * _account;
    IMDChat * _chat;
    NSString * _fromIdentifier;
    NSString * _fromPushID;
    bool  _isFromDefaultPairedDevice;
    bool  _isFromMe;
    bool  _isFromStorage;
    bool  _isLastFromStorage;
    NSArray * _messageItems;
    NSString * _replicationSourceServiceName;
    IMDServiceSession * _serviceSession;
    NSNumber * _timestamp;
    NSString * _toIdentifier;
}

@property (nonatomic, copy) NSString *GUID;
@property (nonatomic, retain) IMDAccount *account;
@property (nonatomic, retain) IMDChat *chat;
@property (nonatomic, copy) NSString *fromIdentifier;
@property (nonatomic, copy) NSString *fromPushID;
@property (nonatomic) bool isFromDefaultPairedDevice;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isFromStorage;
@property (nonatomic) bool isLastFromStorage;
@property (nonatomic, retain) NSArray *messageItems;
@property (nonatomic, copy) NSString *replicationSourceServiceName;
@property (nonatomic, retain) IMDServiceSession *serviceSession;
@property (nonatomic, retain) NSNumber *timestamp;
@property (nonatomic, copy) NSString *toIdentifier;

- (void).cxx_destruct;
- (id)GUID;
- (id)account;
- (id)chat;
- (id)description;
- (id)fromIdentifier;
- (id)fromPushID;
- (id)initWithBD:(id)arg1 idsTrustedData:(id)arg2;
- (bool)isFromDefaultPairedDevice;
- (bool)isFromMe;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (id)messageItems;
- (id)replicationSourceServiceName;
- (id)serviceSession;
- (void)setAccount:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setFromIdentifier:(id)arg1;
- (void)setFromPushID:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setIsFromDefaultPairedDevice:(bool)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsFromStorage:(bool)arg1;
- (void)setIsLastFromStorage:(bool)arg1;
- (void)setMessageItems:(id)arg1;
- (void)setReplicationSourceServiceName:(id)arg1;
- (void)setServiceSession:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setToIdentifier:(id)arg1;
- (id)timestamp;
- (id)toIdentifier;

@end
