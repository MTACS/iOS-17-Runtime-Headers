
@interface WFObjectType : WFType {
    NSBundle * _bundle;
    NSString * _className;
    Class  _objectClass;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly, copy) NSString *string;

+ (bool)supportsSecureCoding;
+ (id)typeWithClass:(Class)arg1;
+ (id)typeWithClassName:(id)arg1 frameworkName:(id)arg2 location:(unsigned long long)arg3;
+ (id)typesWithClasses:(id)arg1;

- (void).cxx_destruct;
- (id)bundle;
- (id)className;
- (bool)conformsToClass:(Class)arg1;
- (bool)conformsToType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClassName:(id)arg1 inBundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClass:(Class)arg1;
- (bool)isEqualToType:(id)arg1;
- (Class)objectClass;
- (id)string;

@end
