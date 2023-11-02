
@interface CTServiceDescriptorContainer : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _descriptors;
}

@property (nonatomic, retain) NSArray *descriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptors:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDescriptors:(id)arg1;

@end
