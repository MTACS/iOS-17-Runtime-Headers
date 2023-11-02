
@interface ECLabelChangeMessageAction : ECLocalMessageAction <ECLabelChangeMessageActionBuilder> {
    NSSet * _labelsToAdd;
    NSSet * _labelsToRemove;
    NSArray * _messages;
    NSSet * _remoteIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *labelsToAdd;
@property (nonatomic, copy) NSSet *labelsToRemove;
@property (nonatomic, retain) NSURL *mailboxURL;
@property (nonatomic, retain) NSString *messageActionPersistentID;
@property (nonatomic, copy) NSArray *messages;
@property (nonatomic, copy) NSSet *remoteIDs;
@property (readonly) Class superclass;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)labelsToAdd;
- (id)labelsToRemove;
- (id)messages;
- (id)remoteIDs;
- (void)setLabelsToAdd:(id)arg1;
- (void)setLabelsToRemove:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)setRemoteIDs:(id)arg1;

@end
