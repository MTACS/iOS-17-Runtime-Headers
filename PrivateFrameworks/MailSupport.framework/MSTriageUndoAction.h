
@interface MSTriageUndoAction : NSObject <MSChangeActionable> {
    EFFuture * _changeActionFuture;
    bool  _isValid;
    EMMessageRepository * _messageRepository;
}

@property (nonatomic, readonly) EFFuture *changeActionFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUndoSupported;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) EMMessageRepository *messageRepository;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)changeActionFuture;
- (id)initWithChangeActionFuture:(id)arg1 messageRepository:(id)arg2;
- (bool)isUndoSupported;
- (bool)isValid;
- (id)messageRepository;

@end
