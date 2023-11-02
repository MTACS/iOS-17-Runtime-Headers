
@interface VUIMediaEntityPropertyDescriptor : NSObject <NSCopying> {
    bool  _allowsDefaultValue;
    id  _defaultValue;
    NSString * _name;
    unsigned long long  _propertyType;
    NSString * _propertyValueClassName;
    bool  _retrievesSourcePropertiesAtFetch;
    NSString * _sortAsName;
    id /* block */  _sourceFilterBlock;
    id /* block */  _sourceFilterValueBlock;
    NSSet * _sourcePropertyNames;
    bool  _sourceSupportsFiltering;
}

@property (nonatomic) bool allowsDefaultValue;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long propertyType;
@property (nonatomic, copy) NSString *propertyValueClassName;
@property (nonatomic) bool retrievesSourcePropertiesAtFetch;
@property (nonatomic, copy) NSString *sortAsName;
@property (nonatomic, copy) id /* block */ sourceFilterBlock;
@property (nonatomic, copy) id /* block */ sourceFilterValueBlock;
@property (nonatomic, copy) NSSet *sourcePropertyNames;
@property (nonatomic) bool sourceSupportsFiltering;

+ (id)_classNameFromPropertyType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_updateSourceSupportsFiltering;
- (bool)allowsDefaultValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultValue;
- (id)description;
- (id)init;
- (id)name;
- (unsigned long long)propertyType;
- (id)propertyValueClassName;
- (bool)retrievesSourcePropertiesAtFetch;
- (void)setAllowsDefaultValue:(bool)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyType:(unsigned long long)arg1;
- (void)setPropertyValueClassName:(id)arg1;
- (void)setRetrievesSourcePropertiesAtFetch:(bool)arg1;
- (void)setSortAsName:(id)arg1;
- (void)setSourceFilterBlock:(id /* block */)arg1;
- (void)setSourceFilterValueBlock:(id /* block */)arg1;
- (void)setSourcePropertyNames:(id)arg1;
- (void)setSourceSupportsFiltering:(bool)arg1;
- (id)sortAsName;
- (id /* block */)sourceFilterBlock;
- (id /* block */)sourceFilterValueBlock;
- (id)sourcePropertyNames;
- (bool)sourceSupportsFiltering;

@end
