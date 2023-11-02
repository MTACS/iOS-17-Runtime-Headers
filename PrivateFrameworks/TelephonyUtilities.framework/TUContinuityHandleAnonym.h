
@interface TUContinuityHandleAnonym : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _label;
    NSString * _localizedDisplayName;
    long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 label:(id)arg2 localizedDisplayName:(id)arg3 type:(long long)arg4;
- (id)label;
- (id)localizedDisplayName;
- (id)localizedDisplayNameAfter112873359;
- (long long)type;

@end
