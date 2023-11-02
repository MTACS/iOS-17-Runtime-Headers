
@interface BMRemoteSQLStoreManager : BMSQLStoreManager {
    bool  _remoteOnly;
}

@property (nonatomic) bool remoteOnly;

- (id)deleteRowsDerivedFromStream:(id)arg1 eventIdentifier:(id)arg2;
- (bool)hasReadWriteAccessToURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)remoteOnly;
- (void)setRemoteOnly:(bool)arg1;

@end
