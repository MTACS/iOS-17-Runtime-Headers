
@interface SBHFeatureIntroductionManager : NSObject <BSDescriptionProviding> {
    NSMutableDictionary * _allFeatureIntroductionItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFeatureIntroductionItem:(id)arg1 atLocations:(unsigned long long)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)featureIntroductionItemAtLocation:(unsigned long long)arg1;
- (id)featureIntroductionItemAtLocation:(unsigned long long)arg1 withIdentifier:(id)arg2;
- (id)featureIntroductionItemsSetAtLocation:(unsigned long long)arg1;
- (unsigned long long)featureLocationFromMask:(unsigned long long)arg1;
- (id)featureLocationKeyFromLocation:(unsigned long long)arg1;
- (id)init;
- (void)removeAllFeatureIntroductionsAtLocations:(unsigned long long)arg1;
- (void)removeFeatureIntroductionAtAllLocationsWithItem:(id)arg1;
- (void)removeFeatureIntroductionItem:(id)arg1 atLocations:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
