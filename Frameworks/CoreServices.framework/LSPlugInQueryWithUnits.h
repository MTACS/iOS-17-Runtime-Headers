
@interface LSPlugInQueryWithUnits : LSPlugInQuery {
    NSUUID * _dbUUID;
    NSArray * _pluginUnits;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlugInUnits:(id)arg1 forDatabaseWithUUID:(id)arg2;

@end
