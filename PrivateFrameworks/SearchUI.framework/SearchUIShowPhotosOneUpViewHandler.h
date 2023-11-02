
@interface SearchUIShowPhotosOneUpViewHandler : SearchUICommandHandler

+ (id)matchedPersonLocalIdentifiersForCommand:(id)arg1;
+ (id)matchedSceneIdentifiersForCommand:(id)arg1 andType:(int)arg2;

- (id)additionalActionMenuItems;
- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (unsigned long long)destination;
- (id)itemProviderForCopy;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (bool)supportsCopy;

@end
