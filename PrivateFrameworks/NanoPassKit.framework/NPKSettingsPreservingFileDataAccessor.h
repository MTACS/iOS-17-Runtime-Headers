
@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor {
    NPKCompanionAgentConnection * _connection;
    NSString * _objectUniqueID;
}

@property (nonatomic, retain) NPKCompanionAgentConnection *connection;
@property (nonatomic, retain) NSString *objectUniqueID;

- (void).cxx_destruct;
- (id)connection;
- (id)objectUniqueID;
- (void)setConnection:(id)arg1;
- (void)setObjectUniqueID:(id)arg1;
- (void)updateSettings:(unsigned long long)arg1;

@end
