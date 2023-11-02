
@interface DRPasteAnnouncementEndpoint : NSObject <NSSecureCoding> {
    NSString * _localizedName;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLocalizedName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;

@end
