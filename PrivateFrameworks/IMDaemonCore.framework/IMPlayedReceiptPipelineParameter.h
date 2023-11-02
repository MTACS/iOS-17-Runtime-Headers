
@interface IMPlayedReceiptPipelineParameter : NSObject <IMFindAccountProcessingParameter, IMMessageFromStorageParameter, IMPlayedReceiptProcessingParameter> {
    NSString * _GUID;
    IMDAccount * _account;
    IMDChat * _chat;
    NSString * _fromIdentifier;
    IMDiMessageIDSTrustedData * _idsTrustedData;
    bool  _isFromDefaultPairedDevice;
    bool  _isFromStorage;
    bool  _isLastFromStorage;
    NSArray * _messageItems;
    NSString * _replicationSourceServiceName;
    IMDServiceSession * _serviceSession;
    NSNumber * _timestamp;
    NSString * _toIdentifier;
}

@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, retain) IMDAccount *account;
@property (nonatomic, retain) IMDChat *chat;
@property (nonatomic, copy) NSString *fromIdentifier;
@property (nonatomic, readonly) IMDiMessageIDSTrustedData *idsTrustedData;
@property (nonatomic, readonly) bool isFromDefaultPairedDevice;
@property (nonatomic, readonly) bool isFromStorage;
@property (nonatomic, readonly) bool isLastFromStorage;
@property (nonatomic, copy) NSArray *messageItems;
@property (nonatomic, copy) NSString *replicationSourceServiceName;
@property (nonatomic, retain) IMDServiceSession *serviceSession;
@property (nonatomic, readonly) NSNumber *timestamp;
@property (nonatomic, copy) NSString *toIdentifier;

- (void).cxx_destruct;
- (id)GUID;
- (id)account;
- (id)chat;
- (id)description;
- (id)fromIdentifier;
- (id)idsTrustedData;
- (id)initWithDefusedMessage:(id)arg1 idsTrustedData:(id)arg2 isFromDefaultPairedDevice:(bool)arg3;
- (id)initWithIdsTrustedData:(id)arg1 GUID:(id)arg2 timestamp:(id)arg3 isFromStorage:(bool)arg4 isLastFromStorage:(bool)arg5 isFromDefaultPairedDevice:(bool)arg6;
- (bool)isFromDefaultPairedDevice;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (id)messageItems;
- (id)replicationSourceServiceName;
- (id)serviceSession;
- (void)setAccount:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setFromIdentifier:(id)arg1;
- (void)setMessageItems:(id)arg1;
- (void)setReplicationSourceServiceName:(id)arg1;
- (void)setServiceSession:(id)arg1;
- (void)setToIdentifier:(id)arg1;
- (id)timestamp;
- (id)toIdentifier;

@end
