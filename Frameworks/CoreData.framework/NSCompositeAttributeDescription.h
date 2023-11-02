
@interface NSCompositeAttributeDescription : NSAttributeDescription {
    NSArray * _elements;
}

@property (copy) NSArray *elements;

+ (bool)supportsSecureCoding;

- (void)_addElement:(id)arg1;
- (id)_buildDefaultValue;
- (void)_createCachesAndOptimizeState;
- (id)_flattenElements:(id)arg1;
- (id)_flattenedElements;
- (id)_initWithName:(id)arg1;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3;
- (id)_initWithType:(unsigned long long)arg1;
- (bool)_isSchemaEqual:(id)arg1;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTransient;
- (void)setAttributeType:(unsigned long long)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setTransient:(bool)arg1;

@end
