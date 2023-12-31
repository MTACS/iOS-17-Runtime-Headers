
@interface CallDBMetaInfo : NSObject {
    NSURL * _dbInfoPrefFile;
}

@property (retain) NSURL *dbInfoPrefFile;

- (void).cxx_destruct;
- (id)dbInfoPrefFile;
- (id)initWithURL:(id)arg1;
- (long long)readDatabaseVersion:(bool)arg1;
- (void)setDbInfoPrefFile:(id)arg1;
- (bool)validateInfo:(bool)arg1;
- (void)writeDatabaseVersion:(long long)arg1 isTemp:(bool)arg2;

@end
