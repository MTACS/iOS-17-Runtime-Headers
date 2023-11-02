
@interface _GCSyntheticControllerDescription : NSObject {
    <NSCopying><NSObject><NSSecureCoding> * _controllerIdentifier;
    NSString * _persistentIdentifier;
}

@property (readonly) <NSCopying><NSObject><NSSecureCoding> *controllerIdentifier;
@property (readonly) NSString *persistentIdentifier;

- (void).cxx_destruct;
- (id)controllerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithControllerIdentifier:(id)arg1 persistentIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescription:(id)arg1;
- (id)persistentIdentifier;

@end
