
@interface TUNearbySuggestionAdvertisement : NSObject <NSSecureCoding> {
    NSString * _deviceIdentifier;
    NSUUID * _suggestionIdentifier;
    long long  _type;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSUUID *suggestionIdentifier;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithSuggestionIdentifier:(id)arg1 deviceIdentifier:(id)arg2 type:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSuggestionAdvertisement:(id)arg1;
- (id)suggestionIdentifier;
- (long long)type;

@end
