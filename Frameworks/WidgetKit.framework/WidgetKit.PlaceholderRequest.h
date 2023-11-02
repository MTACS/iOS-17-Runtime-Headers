
@interface WidgetKit.PlaceholderRequest : NSObject <NSSecureCoding> {
    void environment;
    void extensionIdentity;
    void fileHandle;
    void kind;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
