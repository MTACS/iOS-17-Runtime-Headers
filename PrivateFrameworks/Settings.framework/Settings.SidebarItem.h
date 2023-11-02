
@interface Settings.SidebarItem : NSObject <NSSecureCoding> {
    void $__lazy_storage_$_icon;
    void badgeCount;
    void flexibleWidth;
    void iconFromBundleID;
    void iconUTTypeIdentifier;
    void image;
    void name;
    void subtext;
    void tooltip;
    void uuid;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
