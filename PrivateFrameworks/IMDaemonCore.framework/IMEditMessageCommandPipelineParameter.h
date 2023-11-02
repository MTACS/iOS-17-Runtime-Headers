
@interface IMEditMessageCommandPipelineParameter : NSObject <IMEditMessageCommandProcessingParameter, IMFindAccountProcessingParameter, IMMessageFromStorageParameter> {
    IMDAccount * _account;
    IMDChat * _chat;
    NSString * _editCommandGUID;
    unsigned long long  _editType;
    NSString * _editedMessageGUID;
    NSAttributedString * _editedMessagePartBody;
    NSArray * _editedMessagePartFileTransferGUIDs;
    long long  _editedMessagePartIndex;
    NSString * _fromIdentifier;
    bool  _hasEditTypeAndPartIndex;
    IMDiMessageIDSTrustedData * _idsTrustedData;
    bool  _isFromStorage;
    bool  _isLastFromStorage;
    NSArray * _messageItems;
    NSString * _replicationSourceServiceName;
    IMDServiceSession * _serviceSession;
    bool  _shouldRetractMessageSubject;
    NSNumber * _timestamp;
    NSString * _toIdentifier;
}

@property (nonatomic, retain) IMDAccount *account;
@property (nonatomic, retain) IMDChat *chat;
@property (nonatomic, readonly) NSString *editCommandGUID;
@property (nonatomic, readonly) unsigned long long editType;
@property (nonatomic, readonly) NSString *editedMessageGUID;
@property (nonatomic, readonly) NSAttributedString *editedMessagePartBody;
@property (nonatomic, readonly) NSArray *editedMessagePartFileTransferGUIDs;
@property (nonatomic, readonly) long long editedMessagePartIndex;
@property (nonatomic, copy) NSString *fromIdentifier;
@property (nonatomic, readonly) bool hasEditTypeAndPartIndex;
@property (nonatomic, readonly) IMDiMessageIDSTrustedData *idsTrustedData;
@property (nonatomic, readonly) bool isFromStorage;
@property (nonatomic, readonly) bool isLastFromStorage;
@property (nonatomic, copy) NSArray *messageItems;
@property (nonatomic, copy) NSString *replicationSourceServiceName;
@property (nonatomic, retain) IMDServiceSession *serviceSession;
@property (nonatomic, readonly) bool shouldRetractMessageSubject;
@property (nonatomic, readonly) NSNumber *timestamp;
@property (nonatomic, copy) NSString *toIdentifier;

- (void).cxx_destruct;
- (id)GUID;
- (id)_createSuperFormattedStringWithAttributedString:(id)arg1;
- (id)_existingFileTransfersForMessageGuid:(id)arg1;
- (unsigned long long)_messageItemEditTypeForBlastdoorEditType:(long long)arg1;
- (id)account;
- (id)chat;
- (id)description;
- (id)editCommandGUID;
- (unsigned long long)editType;
- (id)editedMessageGUID;
- (id)editedMessagePartBody;
- (id)editedMessagePartFileTransferGUIDs;
- (long long)editedMessagePartIndex;
- (id)fromIdentifier;
- (bool)hasEditTypeAndPartIndex;
- (id)idsTrustedData;
- (id)initWithDefusedMessage:(id)arg1 idsTrustedData:(id)arg2;
- (id)initWithIdsTrustedData:(id)arg1 editCommandGUID:(id)arg2 timestamp:(id)arg3 isFromStorage:(bool)arg4 isLastFromStorage:(bool)arg5 editedMessageGUID:(id)arg6 editedMessagePartIndex:(long long)arg7 editType:(unsigned long long)arg8 editedMessagePartBody:(id)arg9 editedMessagePartFileTransferGUIDs:(id)arg10 shouldRetractMessageSubject:(bool)arg11 hasEditTypeAndPartIndex:(bool)arg12;
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
- (bool)shouldRetractMessageSubject;
- (id)timestamp;
- (id)toIdentifier;

@end
