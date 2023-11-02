
@interface _NSAttributeDescriptor : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (id)descriptorForAttributeKey:(id)arg1;
+ (void)initialize;

- (id)attributeValueFromValue:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)name;

@end
