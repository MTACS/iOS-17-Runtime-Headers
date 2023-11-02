
@interface DAEditPropertyAction : DAAction {
    NSString * _propertyName;
    NSString * _propertyNamespace;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) NSString *propertyNamespace;
@property (nonatomic, readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChangedItem:(id)arg1 propertyName:(id)arg2 value:(id)arg3 propertyNamespace:(id)arg4 serverId:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)propertyName;
- (id)propertyNamespace;
- (id)value;

@end
