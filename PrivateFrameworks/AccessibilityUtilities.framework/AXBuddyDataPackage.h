
@interface AXBuddyDataPackage : NSObject <NSSecureCoding> {
    NSDictionary * _accessibilityOptions;
    NSString * _axModel;
    NSString * _axOSVersion;
    NSString * _axPreferredContentSizeCategoryName;
    bool  _hasHomeButton;
    bool  _usesExtendedSlider;
}

@property (nonatomic, retain) NSDictionary *accessibilityOptions;
@property (nonatomic, retain) NSString *axModel;
@property (nonatomic, retain) NSString *axOSVersion;
@property (nonatomic, retain) NSString *axPreferredContentSizeCategoryName;
@property (nonatomic) bool hasHomeButton;
@property (nonatomic) bool usesExtendedSlider;

+ (id)dataBlobForBuddy;
+ (id)dataPackageForCurrentSettings;
+ (id)deviceClassForBuddy;
+ (id)productVersionForBuddy;
+ (void)restoreDataBlobForBuddy:(id)arg1;
+ (void)setTestData:(id)arg1;
+ (void)setTestData:(id)arg1 forModel:(id)arg2 hasHomeButton:(bool)arg3 largeTextUsesExtendedRange:(bool)arg4;
+ (bool)supportsSecureCoding;
+ (id)testData;

- (void).cxx_destruct;
- (id)accessibilityOptions;
- (void)applySavedSettings;
- (id)axModel;
- (id)axOSVersion;
- (id)axPreferredContentSizeCategoryName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHomeButton;
- (id)initWithCoder:(id)arg1;
- (void)processDomainDictionary:(id)arg1;
- (void)setAccessibilityOptions:(id)arg1;
- (void)setAxModel:(id)arg1;
- (void)setAxOSVersion:(id)arg1;
- (void)setAxPreferredContentSizeCategoryName:(id)arg1;
- (void)setHasHomeButton:(bool)arg1;
- (void)setUsesExtendedSlider:(bool)arg1;
- (bool)usesExtendedSlider;

@end
