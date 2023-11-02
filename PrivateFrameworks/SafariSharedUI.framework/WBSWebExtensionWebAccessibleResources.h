
@interface WBSWebExtensionWebAccessibleResources : NSObject {
    NSArray * _matchPatternStrings;
    NSArray * _resourceNames;
}

@property (nonatomic, readonly) NSArray *matchPatternStrings;
@property (nonatomic, readonly) NSArray *resourceNames;

- (void).cxx_destruct;
- (void)_populateWebAccessibleResources:(id)arg1 errorStrings:(id*)arg2;
- (id)_regexStringFromPath:(id)arg1;
- (id)initWithManifestV2Array:(id)arg1 errorString:(id*)arg2;
- (id)initWithManifestV3Dictionary:(id)arg1 errorStrings:(id*)arg2 matchPatternException:(id*)arg3;
- (id)matchPatternStrings;
- (id)resourceNames;

@end
