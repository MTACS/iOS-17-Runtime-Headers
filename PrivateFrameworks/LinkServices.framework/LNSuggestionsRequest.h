
@interface LNSuggestionsRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _explicitRequest;
    bool  _onScreen;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (getter=isExplicitRequest, nonatomic, readonly) bool explicitRequest;
@property (getter=isOnScreen, nonatomic, readonly) bool onScreen;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 onScreen:(bool)arg2 explicitRequest:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isExplicitRequest;
- (bool)isOnScreen;

@end
