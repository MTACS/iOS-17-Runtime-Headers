
@interface BMContextualActionParameter : NSObject <NSSecureCoding> {
    NSDictionary * _parameterMetadata;
    NSString * _parameterType;
}

@property (nonatomic, readonly) NSDictionary *parameterMetadata;
@property (nonatomic, readonly) NSString *parameterType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 metadata:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameterMetadata;
- (id)parameterType;

@end
