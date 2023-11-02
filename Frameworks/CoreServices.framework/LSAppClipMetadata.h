
@interface LSAppClipMetadata : NSObject <NSSecureCoding> {
    NSDictionary * _appClipPlist;
    NSArray * _parentApplicationIdentifiers;
}

@property (readonly) NSArray *parentApplicationIdentifiers;
@property (readonly) bool wantsEphemeralNotifications;
@property (readonly) bool wantsLocationConfirmation;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithApplicationRecord:(id)arg1 parentApplicationIdentifiers:(id)arg2 appClipPlist:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parentApplicationIdentifiers;
- (bool)wantsEphemeralNotifications;
- (bool)wantsLocationConfirmation;

@end
