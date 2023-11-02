
@interface IDSInvitation : NSObject {
    <IDSInvitationContext> * _context;
    NSDate * _expirationDate;
    NSString * _selfHandle;
    NSString * _senderMergeID;
    long long  _state;
    NSUUID * _uniqueID;
}

@property (nonatomic, readonly) <IDSInvitationContext> *context;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *selfHandle;
@property (nonatomic, readonly, copy) NSString *senderMergeID;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, copy) NSUUID *uniqueID;

- (void).cxx_destruct;
- (id)context;
- (id)expirationDate;
- (id)initWithState:(long long)arg1 expirationDate:(id)arg2 uniqueID:(id)arg3 context:(id)arg4;
- (id)selfHandle;
- (id)senderMergeID;
- (long long)state;
- (id)uniqueID;

@end
