
@interface _GCControllerDescription : NSObject <_GCUpdatableIPCObjectDescription> {
    NSArray * _componentDescriptions;
    <NSCopying><NSObject><NSSecureCoding> * _identifier;
    GCController * _materializedController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying><NSObject><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

+ (Class)controllerClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 components:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescription:(id)arg1;
- (id)materializeWithContext:(id)arg1;
- (id)redactedDescription;
- (bool)update:(id)arg1 withContext:(id)arg2;

@end
