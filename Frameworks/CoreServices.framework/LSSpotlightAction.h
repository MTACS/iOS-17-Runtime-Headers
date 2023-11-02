
@interface LSSpotlightAction : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _symbolImageName;
    NSString * _unlocalizedTitle;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *symbolImageName;
@property (nonatomic, readonly) NSString *unlocalizedTitle;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 unlocalizedTitle:(id)arg2 symbolImageName:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpotlightAction:(id)arg1;
- (id)symbolImageName;
- (id)unlocalizedTitle;

@end
