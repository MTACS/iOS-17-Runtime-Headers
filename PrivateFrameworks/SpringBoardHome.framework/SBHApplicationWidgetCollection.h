
@interface SBHApplicationWidgetCollection : NSObject <BSDescriptionProviding, NSCopying> {
    NSString * _collectionIdentifier;
    NSString * _containerName;
    bool  _disfavored;
    SBLeafIcon * _icon;
    NSString * _iconImageApplicationBundleIdentifier;
    NSString * _vendorName;
    NSArray * _widgetDescriptors;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (nonatomic, copy) NSString *containerName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisfavored, nonatomic) bool disfavored;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBLeafIcon *icon;
@property (nonatomic, copy) NSString *iconImageApplicationBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *vendorName;
@property (nonatomic, copy) NSArray *widgetDescriptors;

- (void).cxx_destruct;
- (id)collectionIdentifier;
- (id)containerName;
- (bool)containsWidgetDescriptorMatchingDescriptor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (id)icon;
- (id)iconImageApplicationBundleIdentifier;
- (unsigned long long)indexOfWidgetDescriptorMatchingDescriptor:(id)arg1;
- (id)initWithIcon:(id)arg1 galleryItems:(id)arg2 vendorName:(id)arg3;
- (bool)isDisfavored;
- (void)setContainerName:(id)arg1;
- (void)setDisfavored:(bool)arg1;
- (void)setIconImageApplicationBundleIdentifier:(id)arg1;
- (void)setWidgetDescriptors:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)vendorName;
- (id)widgetDescriptors;

@end
