
@interface PTPendingPush : NSObject {
    NSDictionary * _payload;
    id /* block */  _reply;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSDictionary *payload;
@property (nonatomic, copy) id /* block */ reply;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)payload;
- (id /* block */)reply;
- (void)setPayload:(id)arg1;
- (void)setReply:(id /* block */)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
