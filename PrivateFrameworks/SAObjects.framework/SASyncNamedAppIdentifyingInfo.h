
@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo

@property (nonatomic, copy) NSString *localizedBundleDisplayName;

+ (id)namedAppIdentifyingInfo;
+ (id)namedAppIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)localizedBundleDisplayName;
- (void)setLocalizedBundleDisplayName:(id)arg1;

@end
