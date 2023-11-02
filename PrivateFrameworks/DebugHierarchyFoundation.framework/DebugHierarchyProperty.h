
@interface DebugHierarchyProperty : NSObject {
    NSString * _format;
    NSString * _logicalType;
    NSString * _name;
    long long  _options;
    NSString * _runtimeTypeName;
    long long  _visibility;
}

@property (retain) NSString *format;
@property (retain) NSString *logicalType;
@property (retain) NSString *name;
@property long long options;
@property (retain) NSString *runtimeTypeName;
@property long long visibility;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)format;
- (id)initWithName:(id)arg1 runtimeTypeName:(id)arg2;
- (id)initWithPropertyDescription:(id)arg1;
- (bool)isEditable;
- (id)logicalType;
- (id)name;
- (long long)options;
- (id)runtimeTypeName;
- (void)setFormat:(id)arg1;
- (void)setLogicalType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setRuntimeTypeName:(id)arg1;
- (void)setVisibility:(long long)arg1;
- (long long)visibility;

@end
