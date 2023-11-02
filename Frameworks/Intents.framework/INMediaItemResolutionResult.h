
@interface INMediaItemResolutionResult : INIntentResolutionResult <CMSCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)confirmationRequiredWithMediaItemToConfirm:(id)arg1;
+ (id)disambiguationWithMediaItemsToDisambiguate:(id)arg1;
+ (id)successWithResolvedMediaItem:(id)arg1;
+ (id)successesWithResolvedMediaItems:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

@end
