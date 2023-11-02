
@interface _EDMessageChangeManagerFlagChange : NSObject {
    ECMessageFlagChange * _localChange;
    <EDPersistedMessage> * _message;
    ECMessageFlagChange * _serverChange;
}

@property (nonatomic, retain) ECMessageFlagChange *localChange;
@property (nonatomic, retain) <EDPersistedMessage> *message;
@property (nonatomic, retain) ECMessageFlagChange *serverChange;

- (void).cxx_destruct;
- (id)localChange;
- (id)message;
- (id)serverChange;
- (void)setLocalChange:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setServerChange:(id)arg1;

@end
