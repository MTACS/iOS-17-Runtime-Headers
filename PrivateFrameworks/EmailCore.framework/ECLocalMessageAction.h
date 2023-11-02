
@interface ECLocalMessageAction : NSObject <ECLocalMessageActionBuilder> {
    NSURL * _mailboxURL;
    NSString * _messageActionPersistentID;
    bool  _userInitiated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *mailboxURL;
@property (nonatomic, retain) NSString *messageActionPersistentID;
@property (readonly) Class superclass;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)description;
- (id)mailboxURL;
- (id)messageActionPersistentID;
- (void)setMailboxURL:(id)arg1;
- (void)setMessageActionPersistentID:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)userInitiated;

@end
