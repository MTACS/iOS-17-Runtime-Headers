
@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter> {
    NSObject * _connectionLock;
    NSString * _container;
    NSXPCConnection * _currentConnection;
    NSString * _name;
    NSUUID * _persistenceRecordIdentifier;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) NSObject *connectionLock;
@property (nonatomic, retain) NSString *container;
@property (nonatomic, retain) NSXPCConnection *currentConnection;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSUUID *persistenceRecordIdentifier;
@property (nonatomic) bool syncToWatch;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)new;

- (void).cxx_destruct;
- (bool)active;
- (void)clearAllSettings;
- (void)clearCurrentConnectionAndInvalidate:(bool)arg1;
- (id)connectionLock;
- (id)container;
- (id)currentConnection;
- (void)dealloc;
- (id)getStoreProperties;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 sharedContainer:(id)arg2;
- (id)initWithSharedContainer:(id)arg1;
- (id)name;
- (id)persistenceRecordIdentifier;
- (id)reader;
- (void)removeValueForSetting:(id)arg1 inGroup:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setCurrentConnection:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersistenceRecordIdentifier:(id)arg1;
- (void)setSyncToWatch:(bool)arg1;
- (void)setValue:(id)arg1 forSetting:(id)arg2 inGroup:(id)arg3;
- (bool)syncToWatch;
- (void)updateStoreProperties:(id)arg1;
- (id)valueForSetting:(id)arg1 inGroup:(id)arg2;
- (id)writer;
- (id)xpcConnection;

@end
