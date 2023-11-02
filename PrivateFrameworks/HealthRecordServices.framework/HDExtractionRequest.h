
@interface HDExtractionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _resources;
}

@property (nonatomic, readonly, copy) NSArray *resources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)resources;

@end
