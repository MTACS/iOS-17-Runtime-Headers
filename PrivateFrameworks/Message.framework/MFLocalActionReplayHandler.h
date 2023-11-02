
@interface MFLocalActionReplayHandler : NSObject <EFLoggable, EFPubliclyDescribable> {
    MailAccount * _account;
    NSMutableArray * _actionsToReplay;
    MFMailMessageLibrary * _library;
    bool  _needToCheckForNewActions;
    <EFScheduler> * _replayScheduler;
    bool  _replayingActions;
}

@property (nonatomic) MailAccount *account;
@property (nonatomic, retain) NSMutableArray *actionsToReplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFMailMessageLibrary *library;
@property (nonatomic) bool needToCheckForNewActions;
@property (nonatomic, readonly) <EFScheduler> *replayScheduler;
@property bool replayingActions;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_checkForNewActions;
- (void)_replayAllActions;
- (id)account;
- (id)actionsToReplay;
- (void)addNewAction:(id)arg1;
- (void)connectionEstablished;
- (id)ef_publicDescription;
- (id)initWithLibrary:(id)arg1 account:(id)arg2;
- (id)library;
- (bool)needToCheckForNewActions;
- (void)newActionsAdded;
- (id)replayScheduler;
- (bool)replayingActions;
- (void)setAccount:(id)arg1;
- (void)setActionsToReplay:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setNeedToCheckForNewActions:(bool)arg1;
- (void)setReplayingActions:(bool)arg1;

@end
