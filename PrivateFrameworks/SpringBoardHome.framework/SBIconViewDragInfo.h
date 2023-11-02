
@interface SBIconViewDragInfo : NSObject <BSDescriptionProviding, NSSecureCoding> {
    NSString * _activeCustomIconDataSourceUniqueIdentifier;
    NSString * _applicationBundleIdentifier;
    NSArray * _customIconDataSourceConfigurations;
    unsigned long long  _gridSizeClass;
    NSURL * _launchURL;
    long long  _startLocation;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *activeCustomIconDataSourceUniqueIdentifier;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSArray *customIconDataSourceConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long gridSizeClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic) long long startLocation;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeCustomIconDataSourceUniqueIdentifier;
- (id)applicationBundleIdentifier;
- (id)customIconDataSourceConfigurations;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)gridSizeClass;
- (id)initWithCoder:(id)arg1;
- (id)launchURL;
- (void)setActiveCustomIconDataSourceUniqueIdentifier:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCustomIconDataSourceConfigurations:(id)arg1;
- (void)setGridSizeClass:(unsigned long long)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setStartLocation:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (long long)startLocation;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;

@end
