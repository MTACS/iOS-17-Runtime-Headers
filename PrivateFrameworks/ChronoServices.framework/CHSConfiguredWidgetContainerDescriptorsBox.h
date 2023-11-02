
@interface CHSConfiguredWidgetContainerDescriptorsBox : NSObject <NSSecureCoding> {
    NSArray * _descriptors;
}

@property (nonatomic, readonly, copy) NSArray *descriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptors:(id)arg1;

@end
