
@interface ECFlagChangeMessageAction : ECLocalMessageAction <ECFlagChangeMessageActionBuilder> {
    ECMessageFlagChange * _flagChange;
    NSArray * _messages;
    NSSet * _remoteIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ECMessageFlagChange *flagChange;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *mailboxURL;
@property (nonatomic, retain) NSString *messageActionPersistentID;
@property (nonatomic, copy) NSArray *messages;
@property (nonatomic, copy) NSSet *remoteIDs;
@property (readonly) Class superclass;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)flagChange;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)messages;
- (id)remoteIDs;
- (void)setFlagChange:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)setRemoteIDs:(id)arg1;

@end
