
@interface VUIMediaEntityKind : NSObject <NSCopying> {
    NSString * _mediaEntityClassName;
    NSArray * _propertyDescriptors;
    NSDictionary * _propertyDescriptorsByName;
}

@property (nonatomic, readonly, copy) NSString *mediaEntityClassName;
@property (nonatomic, copy) NSArray *propertyDescriptors;
@property (nonatomic, copy) NSDictionary *propertyDescriptorsByName;

- (void).cxx_destruct;
- (void)_updatePropertyDescriptorsByName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithMediaEntityClassName:(id)arg1;
- (id)mediaEntityClassName;
- (id)propertyDescriptorForName:(id)arg1;
- (id)propertyDescriptors;
- (id)propertyDescriptorsByName;
- (void)setPropertyDescriptors:(id)arg1;
- (void)setPropertyDescriptorsByName:(id)arg1;
- (id)sortingPropertyDescriptorForName:(id)arg1;

@end
