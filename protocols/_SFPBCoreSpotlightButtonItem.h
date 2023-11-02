
@protocol _SFPBCoreSpotlightButtonItem <NSObject>

@required

- (NSArray *)actionItemTypes;
- (NSString *)actionItemTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionItemTypesCount;
- (void)addActionItemTypes:(NSString *)arg1;
- (NSString *)applicationBundleIdentifier;
- (void)clearActionItemTypes;
- (NSString *)coreSpotlightIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setActionItemTypes:(NSArray *)arg1;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setCoreSpotlightIdentifier:(NSString *)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;

@end
