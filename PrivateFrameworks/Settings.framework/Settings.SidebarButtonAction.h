
@interface Settings.SidebarButtonAction : NSObject <NSSecureCoding> {
    void action;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
