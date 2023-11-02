
@interface CLSPublicEventPerformer : NSObject <NSSecureCoding> {
    NSString * _iTunesIdentifier;
    NSString * _localizedName;
}

@property (nonatomic, readonly) NSString *iTunesIdentifier;
@property (nonatomic, readonly) NSString *localizedName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 iTunesIdentifier:(id)arg2;
- (id)localizedName;

@end
