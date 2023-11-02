
@interface ML3ActiveTransaction : NSObject <NSLocking> {
    ML3Client * _client;
    ML3DatabaseConnection * _connection;
    NSUUID * _identifier;
    bool  _inUseByOperation;
    double  _lastUsedTime;
    ML3MusicLibrary * _library;
    NSLock * _lock;
    bool  _readOnly;
    bool  _terminable;
    MSVXPCTransaction * _xpcTransaction;
}

@property (nonatomic, readonly) ML3Client *client;
@property (nonatomic, readonly) ML3DatabaseConnection *connection;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) bool inUseByOperation;
@property (nonatomic) double lastUsedTime;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (getter=isReadOnly, nonatomic) bool readOnly;
@property (nonatomic) bool terminable;

- (void).cxx_destruct;
- (id)_relinquishConnection;
- (id)client;
- (id)connection;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (bool)inUseByOperation;
- (id)init;
- (id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3;
- (bool)isReadOnly;
- (double)lastUsedTime;
- (id)library;
- (void)lock;
- (void)setInUseByOperation:(bool)arg1;
- (void)setLastUsedTime:(double)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setTerminable:(bool)arg1;
- (bool)terminable;
- (void)unlock;
- (void)updateLastUsed;

@end
