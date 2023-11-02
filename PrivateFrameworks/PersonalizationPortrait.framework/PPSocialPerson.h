
@interface PPSocialPerson : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _handle;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *handle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2;

@end
