
@interface CHSWidgetDescriptorsBox : NSObject <NSSecureCoding> {
    NSDictionary * _descriptorsByExtensionIdentifier;
}

@property (nonatomic, readonly, copy) NSSet *descriptors;
@property (nonatomic, readonly, copy) NSDictionary *descriptorsByExtensionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_performValidation;
- (id)descriptors;
- (id)descriptorsByExtensionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptors:(id)arg1;

@end
