
@interface MSTriageAction : NSObject <MSChangeActionable> {
    long long  _actor;
    <MSTriageActionDelegate> * _delegate;
    MSMessageListItemSelection * _messageListItemSelection;
    long long  _origin;
}

@property (nonatomic) long long actor;
@property (nonatomic, readonly) EFFuture *changeActionFuture;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MSTriageActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUndoSupported;
@property (nonatomic, readonly) MSMessageListItemSelection *messageListItemSelection;
@property (nonatomic, readonly) EMMessageRepository *messageRepository;
@property (nonatomic) long long origin;
@property (readonly) Class superclass;

+ (id)_performAction:(id)arg1 actionName:(id)arg2;
+ (void)_performAction:(id)arg1 undoManager:(id)arg2 actionName:(id)arg3;
+ (id)log;

- (void).cxx_destruct;
- (id)_changeAction;
- (long long)actor;
- (id)changeActionFuture;
- (id)delegate;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4;
- (bool)isUndoSupported;
- (id)messageListItemSelection;
- (id)messageRepository;
- (long long)origin;
- (void)performWithUndoManager:(id)arg1 actionName:(id)arg2 completion:(id /* block */)arg3;
- (void)setActor:(long long)arg1;
- (void)setOrigin:(long long)arg1;

@end
