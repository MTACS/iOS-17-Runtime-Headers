
@interface _IDSSessionStore : NSObject {
    NSMapTable * _sessionBySessionID;
}

@property (nonatomic, retain) NSMapTable *sessionBySessionID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)sessionBySessionID;
- (id)sessionForAccount:(id)arg1 fromID:(id)arg2 identifier:(id)arg3 transportType:(id)arg4;
- (void)setSessionBySessionID:(id)arg1;

@end
