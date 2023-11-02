
@interface IMSyndicationActionPipelineParameter : NSObject <IMFindAccountProcessingParameter, IMFindChatProcessingParameter, IMSyndicationActionProcessingParameter> {
    IMDAccount * _account;
    unsigned char  _actionType;
    IMDChat * _chat;
    NSString * _currentGroupName;
    unsigned long long  _encodedSyndicationStartDate;
    NSString * _fromDisplayID;
    NSString * _fromIdentifier;
    NSString * _groupID;
    bool  _isFromMe;
    unsigned char  _itemType;
    NSString * _messagePartGUID;
    NSArray * _participantIdentifiers;
    NSString * _replicationSourceServiceName;
    IMDServiceSession * _serviceSession;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _syndicatedMessagePartRange;
    IMSyndicationAction * _syndicationAction;
    NSString * _toIdentifier;
    unsigned char  _version;
}

@property (nonatomic, retain) IMDAccount *account;
@property (nonatomic, readonly) unsigned char actionType;
@property (nonatomic, readonly) IMDChat *chat;
@property (nonatomic, copy) NSString *currentGroupName;
@property (nonatomic, readonly) unsigned long long encodedSyndicationStartDate;
@property (nonatomic, copy) NSString *fromDisplayID;
@property (nonatomic, copy) NSString *fromIdentifier;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic) bool isFromMe;
@property (nonatomic, readonly) unsigned char itemType;
@property (nonatomic, readonly) NSString *messagePartGUID;
@property (nonatomic, copy) NSArray *participantIdentifiers;
@property (nonatomic, copy) NSString *replicationSourceServiceName;
@property (nonatomic, retain) IMDServiceSession *serviceSession;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } syndicatedMessagePartRange;
@property (nonatomic, readonly) IMSyndicationAction *syndicationAction;
@property (nonatomic, copy) NSString *toIdentifier;
@property (nonatomic, readonly) unsigned char version;

- (void).cxx_destruct;
- (id)account;
- (unsigned char)actionType;
- (id)chat;
- (id)createSyndicationActionWithChat:(id)arg1;
- (id)currentGroupName;
- (id)description;
- (unsigned long long)encodedSyndicationStartDate;
- (id)fromDisplayID;
- (id)fromIdentifier;
- (id)groupID;
- (id)initWithDefusedSyndicationAction:(id)arg1 idsTrustedData:(id)arg2 pipelineResources:(id)arg3;
- (bool)isFromMe;
- (unsigned char)itemType;
- (id)messagePartGUID;
- (id)participantIdentifiers;
- (id)replicationSourceServiceName;
- (id)serviceSession;
- (void)setAccount:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setCurrentGroupName:(id)arg1;
- (void)setFromDisplayID:(id)arg1;
- (void)setFromIdentifier:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setParticipantIdentifiers:(id)arg1;
- (void)setReplicationSourceServiceName:(id)arg1;
- (void)setServiceSession:(id)arg1;
- (void)setSyndicationAction:(id)arg1;
- (void)setToIdentifier:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })syndicatedMessagePartRange;
- (id)syndicationAction;
- (id)toIdentifier;
- (unsigned char)version;

@end
