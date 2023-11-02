
@interface MTRScenesClusterAttributeValuePair : NSObject <NSCopying> {
    NSNumber * _attributeID;
    NSNumber * _attributeValue;
}

@property (nonatomic, copy) NSNumber *attributeID;
@property (nonatomic, copy) NSNumber *attributeId;
@property (nonatomic, copy) NSNumber *attributeValue;

- (void).cxx_destruct;
- (id)attributeID;
- (id)attributeId;
- (id)attributeValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setAttributeID:(id)arg1;
- (void)setAttributeId:(id)arg1;
- (void)setAttributeValue:(id)arg1;

@end
