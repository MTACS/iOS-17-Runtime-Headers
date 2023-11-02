
@interface HDIDSPersistentDictionary : NSObject {
    HDSQLiteDatabase * _database;
    NSURL * _databaseURL;
    Class  _objectClass;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didCancel:(id)arg1;
- (void)didFinishSending:(id)arg1;
- (void)didReceiveError:(id)arg1 forMessageID:(id)arg2;
- (void)didReceiveRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didReceiveResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)didSendRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didSendResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)arg1;
- (id)initWithURL:(id)arg1 objectClass:(Class)arg2;
- (void)invalidate;
- (id)messageIDsForPendingOutgoingMessagesWithType:(int)arg1 deviceID:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(bool)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(double)arg3;

@end
