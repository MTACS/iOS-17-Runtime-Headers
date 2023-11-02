
@interface GCSElementMapping : NSObject <GCSJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _elementKey;
    NSString * _mappingKey;
    int  _remappingOrder;
}

@property (getter=isCustomized, nonatomic, readonly) bool customized;
@property (nonatomic, copy) NSString *elementKey;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, copy) NSString *mappingKey;
@property (nonatomic) int remappingOrder;

+ (id)archivalClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementKey;
- (void)encodeWithCoder:(id)arg1;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithElementKey:(id)arg1 mappingKey:(id)arg2 remappingOrder:(int)arg3;
- (id)initWithJSONObject:(id)arg1;
- (bool)isCustomized;
- (id)jsonObject;
- (id)mappingKey;
- (int)remappingOrder;
- (void)setElementKey:(id)arg1;
- (void)setMappingKey:(id)arg1;
- (void)setRemappingOrder:(int)arg1;

@end
