
@interface HMDEntityCodingDescription : NSObject {
    NSDictionary * _attributeCodingKeysByPropertyName;
    NSDictionary * _attributesByCodingKey;
    NSDictionary * _concreteSubentitiesByTypeID;
    NSEntityDescription * _entity;
    NSDictionary * _keyAttributesByCodingKey;
    NSArray * _parentRelationships;
    NSString * _refContextCodingKey;
    NSEntityDescription * _refContextEntity;
    NSString * _refContextKeyPath;
    NSDictionary * _relationshipCodingKeysByPropertyName;
    NSDictionary * _relationshipsByCodingKey;
    NSString * _typeID;
}

@property (readonly) NSDictionary *attributesByCodingKey;
@property (readonly) NSDictionary *concreteSubentitiesByTypeID;
@property (readonly) NSEntityDescription *entity;
@property (readonly) bool hasConcreteSubentities;
@property (readonly) NSDictionary *keyAttributesByCodingKey;
@property (readonly) NSString *name;
@property (readonly) NSArray *parentRelationships;
@property (readonly) NSString *refContextCodingKey;
@property (readonly) NSEntityDescription *refContextEntity;
@property (readonly) NSString *refContextKeyPath;
@property (readonly) NSDictionary *relationshipsByCodingKey;
@property (readonly) NSString *typeID;

- (void).cxx_destruct;
- (id)attributesByCodingKey;
- (id)concreteSubentitiesByTypeID;
- (id)descriptionForAttribute:(id)arg1;
- (id)descriptionForRelationship:(id)arg1;
- (id)entity;
- (bool)hasConcreteSubentities;
- (id)keyAttributesByCodingKey;
- (id)name;
- (id)parentRelationships;
- (id)refContextCodingKey;
- (id)refContextEntity;
- (id)refContextKeyPath;
- (id)relationshipsByCodingKey;
- (id)typeID;

@end
