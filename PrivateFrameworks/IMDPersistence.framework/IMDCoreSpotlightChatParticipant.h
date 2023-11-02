
@interface IMDCoreSpotlightChatParticipant : NSObject {
    CNContact * _contact;
    NSString * _handleID;
    bool  _isSender;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *handleID;
@property (nonatomic, readonly) bool isSender;

- (void).cxx_destruct;
- (id)contact;
- (id)handleID;
- (id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(bool)arg3;
- (bool)isSender;

@end
