
@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription * _entity;
    bool  _isSingleTableEntity;
    NSArray * _primaryKeys;
    NSDictionary * _propertyMappings;
    NSString * _subentityColumn;
    unsigned int  _subentityID;
}

- (void)dealloc;
- (id)description;
- (id)entity;
- (id)initWithEntity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSingleTableEntity;
- (id)primaryKeys;
- (id)propertyMappings;
- (id)subentityColumn;
- (unsigned int)subentityID;

@end
