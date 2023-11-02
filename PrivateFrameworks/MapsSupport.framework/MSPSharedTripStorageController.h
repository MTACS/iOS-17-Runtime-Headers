
@interface MSPSharedTripStorageController : NSObject {
    <MSPSharedTripStorageDelegate> * _delegate;
    bool  _initalisedStoredSessions;
    NSMutableDictionary * _receiverRules;
    NSMutableDictionary * _senderRules;
    MSPGroupSessionStorage * _senderSessionStorage;
    NSMutableDictionary * _sharedTripGroupSessionInfo;
}

@property (nonatomic) <MSPSharedTripStorageDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *receiverRules;
@property (nonatomic, retain) NSMutableDictionary *senderRules;
@property (nonatomic, retain) MSPGroupSessionStorage *senderSessionStorage;
@property (nonatomic, retain) NSMutableDictionary *sharedTripGroupSessionInfo;

+ (id)_receivedNotificationRulesPath;
+ (id)_receivedSessionsPath;
+ (id)_senderSessionStoragePath;
+ (id)_sentNotificationRulesPath;
+ (void)removeFilesFromBackupsIfNeeded;

- (void).cxx_destruct;
- (id)_identifiersOfStaleSessions:(id)arg1;
- (void)_loadSenderSession;
- (void)_loadStoredSessions;
- (void)_saveReceivingRules;
- (void)_saveSenderSession;
- (void)_saveSendingRules;
- (void)_saveStoredSessions;
- (void)addNewSession:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)groupSessionInfoForKey:(id)arg1;
- (id)init;
- (void)initialiseStoredSessionsIfNeeded;
- (id)receiverRules;
- (id)receivingRulesForIdentifier:(id)arg1;
- (void)receivingRulesTouched;
- (void)removeSession:(id)arg1;
- (id)senderRules;
- (id)senderSessionStorage;
- (id)sendingRulesForIdentifier:(id)arg1;
- (void)sendingRulesTouched;
- (void)setDelegate:(id)arg1;
- (void)setReceiverRules:(id)arg1;
- (void)setSenderRules:(id)arg1;
- (void)setSenderSessionStorage:(id)arg1;
- (void)setSharedTripGroupSessionInfo:(id)arg1;
- (id)sharedTripGroupSessionInfo;
- (void)updateGroupSessionStorageWithState:(id)arg1;

@end
