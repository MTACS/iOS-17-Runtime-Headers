
@interface DBGSnapshotProperty : DebugHierarchyProperty {
    DebugHierarchyProperty * _backingRuntimeTypeProperty;
    long long  _fetchStatus;
    DBGSnapshotNode * _snapshotNode;
    NSMutableDictionary * _subpropertiesMap;
    <DBGValue> * _value;
}

@property double CGFloatValue;
@property (nonatomic, retain) DebugHierarchyProperty *backingRuntimeTypeProperty;
@property bool boolValue;
@property (readonly) NSData *dataValue;
@property long long fetchStatus;
@property (readonly) float floatValue;
@property long long integerValue;
@property struct CGPoint { double x1; double x2; } pointValue;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectValue;
@property struct CGSize { double x1; double x2; } sizeValue;
@property DBGSnapshotNode *snapshotNode;
@property (readonly) NSString *stringValue;
@property (retain) NSMutableDictionary *subpropertiesMap;
@property (retain) <DBGValue> *value;

+ (id)propertyWithDebugHierarchyProperty:(id)arg1;
+ (id)propertyWithName:(id)arg1;
+ (id)propertyWithName:(id)arg1 runtimeTypeName:(id)arg2 value:(id)arg3;

- (void).cxx_destruct;
- (double)CGFloatValue;
- (id)JSONPropertyDescription;
- (void)addSubproperties:(id)arg1;
- (void)addSubproperty:(id)arg1;
- (id)allSubproperties;
- (id)backingRuntimeTypeProperty;
- (bool)boolValue;
- (id)dataValue;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)fetchStatus;
- (float)floatValue;
- (id)format;
- (id)initWithName:(id)arg1 runtimeTypeName:(id)arg2 value:(id)arg3 fetchStatus:(long long)arg4;
- (long long)integerValue;
- (id)logicalType;
- (bool)logicalTypeEquals:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (long long)options;
- (struct CGPoint { double x1; double x2; })pointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectValue;
- (void)setBackingRuntimeTypeProperty:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setCGFloatValue:(double)arg1;
- (void)setFetchStatus:(long long)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setPointValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRectValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSizeValue:(struct CGSize { double x1; double x2; })arg1;
- (void)setSnapshotNode:(id)arg1;
- (void)setSubpropertiesMap:(id)arg1;
- (void)setValue:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeValue;
- (id)snapshotNode;
- (id)stringValue;
- (id)subpropertiesMap;
- (id)subpropertyWithName:(id)arg1;
- (void)updateWithJSONPropertyDescription:(id)arg1;
- (id)value;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)visibility;

@end
