
@interface SHMediaItemPresentationSettings : NSObject <NSSecureCoding> {
    bool  _openResultInBrowserOnFailure;
}

@property (nonatomic, readonly) bool openResultInBrowserOnFailure;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)openResultInBrowserOnFailure;

@end
