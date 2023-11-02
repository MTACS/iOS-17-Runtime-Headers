
@interface _HDDataEntitySyncMessageBuilder : NSObject {
    long long  _currentEncodedBytes;
    bool  _didSendFinal;
    Class  _entityClass;
    HDEntityEncoder * _entityEncoder;
    struct { 
        int minimum; 
        int current; 
    }  _entityVersion;
    bool  _hasEncodedAnyObject;
    long long  _lastEntityAnchor;
    long long  _maxEncodedBytesPerChange;
    long long  _maxEncodedBytesPerChangeSet;
    <HDSyncMessageHandler> * _messageHandler;
    HDProfile * _profile;
    HDDataProvenanceCache * _provenanceCache;
    long long  _sequence;
    long long  _totalEncodedBytes;
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic, readonly, copy) NSArray *orderedProperties;

- (void).cxx_destruct;
- (long long)addEntity:(id)arg1 row:(struct HDSQLiteRow { }*)arg2 anchor:(long long)arg3 error:(id*)arg4;
- (id)description;
- (bool)finishAndFlushWithError:(id*)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1 transaction:(id)arg2 entityClass:(Class)arg3 version:(struct { int x1; int x2; })arg4 provenanceCache:(id)arg5 encodingOptions:(id)arg6 messageHandler:(id)arg7 bytesPerChangeSet:(long long)arg8 bytesPerChange:(long long)arg9;
- (id)orderedProperties;

@end
