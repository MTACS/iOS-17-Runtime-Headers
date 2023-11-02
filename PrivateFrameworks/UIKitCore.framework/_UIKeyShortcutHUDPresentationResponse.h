
@interface _UIKeyShortcutHUDPresentationResponse : NSObject <NSSecureCoding> {
    bool  _accepted;
}

@property (nonatomic) bool accepted;

+ (bool)supportsSecureCoding;

- (bool)accepted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccepted:(bool)arg1;

@end
