
@interface MPPropertySet : NSObject <NSCopying, NSMutableCopying, NSObject, NSSecureCoding> {
    NSSet * _properties;
    NSDictionary * _relationships;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *properties;
@property (nonatomic, readonly) NSDictionary *relationships;
@property (readonly) Class superclass;

+ (id)emptyPropertySet;
+ (id)propertySetWithProperties:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (bool)containsPropertySet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;
- (bool)isEmpty;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)properties;
- (id)propertySetByCombiningWithPropertySet:(id)arg1;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)relationships;

@end
