
@interface HMBModelQueryArgument : HMFObject {
    <HMBQueryableModelFieldCoder> * _defaultValue;
    NSString * _propertyName;
}

@property (nonatomic, readonly) <HMBQueryableModelFieldCoder> *defaultValue;
@property (nonatomic, readonly) NSString *propertyName;

+ (id)argumentWithPropertyName:(id)arg1;
+ (id)argumentWithPropertyName:(id)arg1 defaultValue:(id)arg2;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithPropertyName:(id)arg1 defaultValue:(id)arg2;
- (id)propertyName;

@end
