
@interface SGMIDomainCountingTableGuardedData : NSObject {
    NSArray * _currentColumns;
    long long  _schemaVersion;
}

@property (nonatomic, retain) NSArray *currentColumns;
@property (nonatomic) long long schemaVersion;

- (void).cxx_destruct;
- (id)currentColumns;
- (id)init;
- (long long)schemaVersion;
- (void)setCurrentColumns:(id)arg1;
- (void)setSchemaVersion:(long long)arg1;

@end
