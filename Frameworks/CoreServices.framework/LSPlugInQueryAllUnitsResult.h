
@interface LSPlugInQueryAllUnitsResult : _LSQueryResult {
    NSUUID * _dbUUID;
    NSArray * _pluginUnits;
}

@property (nonatomic, readonly) NSUUID *dbUUID;
@property (nonatomic, readonly) NSArray *pluginUnits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dbUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlugInUnits:(id)arg1 forDatabaseWithUUID:(id)arg2;
- (id)pluginUnits;

@end
