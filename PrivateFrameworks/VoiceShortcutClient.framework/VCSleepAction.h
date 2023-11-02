
@interface VCSleepAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifierForDisplay;
    bool  _goodForSleep;
    NSString * _identifier;
    NSDictionary * _serializedParameters;
    unsigned long long  _shortcutAvailability;
    NSString * _sourceAppBundleIdentifier;
    NSString * _subtitle;
    NSString * _title;
    NSString * _workflowActionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifierForDisplay;
@property (getter=isGoodForSleep, nonatomic, readonly) bool goodForSleep;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSDictionary *serializedParameters;
@property (nonatomic, readonly) unsigned long long shortcutAvailability;
@property (nonatomic, copy) NSString *sourceAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, copy) NSString *workflowActionIdentifier;

+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1;
+ (id)identifierForWorkflowActionIdentifier:(id)arg1 serializedParameters:(id)arg2;
+ (id)openAppActionWithBundleIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifierForDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 workflowActionIdentifier:(id)arg2 sourceAppBundleIdentifier:(id)arg3 bundleIdentifierForDisplay:(id)arg4 title:(id)arg5 subtitle:(id)arg6 serializedParameters:(id)arg7 shortcutAvailability:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isGoodForSleep;
- (id)serializedParameters;
- (void)setSerializedParameters:(id)arg1;
- (void)setSourceAppBundleIdentifier:(id)arg1;
- (void)setWorkflowActionIdentifier:(id)arg1;
- (unsigned long long)shortcutAvailability;
- (id)sourceAppBundleIdentifier;
- (id)subtitle;
- (id)title;
- (id)workflowActionIdentifier;

@end
