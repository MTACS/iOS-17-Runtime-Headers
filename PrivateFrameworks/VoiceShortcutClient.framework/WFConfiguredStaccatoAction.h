
@interface WFConfiguredStaccatoAction : NSObject <NSSecureCoding> {
    NSString * _associatedBundleIdentifier;
    NSString * _identifier;
    NSString * _name;
    WFIcon * _previewIcon;
    NSString * _sectionIdentifier;
    NSData * _shortcutsMetadata;
    NSString * _systemImageName;
}

@property (nonatomic, copy) NSString *associatedBundleIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) WFIcon *previewIcon;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly, copy) NSData *shortcutsMetadata;
@property (nonatomic, copy) NSString *systemImageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2 associatedBundleIdentifier:(id)arg3 name:(id)arg4 systemImageName:(id)arg5 shortcutsMetadata:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isSystemStaccatoAction;
- (id)name;
- (id)previewIcon;
- (id)sectionIdentifier;
- (void)setAssociatedBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreviewIcon:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSystemImageName:(id)arg1;
- (id)shortcutsMetadata;
- (id)systemImageName;
- (id)tintColor;

@end
