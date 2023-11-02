
@interface FxHost : NSObject <FxHostEnvironment, FxStreamProviding> {
    struct FxHostPriv { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; } * _priv;
}

+ (id)_createPathArrayFromURLArray:(id)arg1;
+ (id)_scanFxMetaPlugWrappersWithPlugInManager:(id)arg1;
+ (id)fxMetaPlugsFolderURLs;
+ (id)fxPlugsFolderURLs;
+ (id)host;
+ (id)internalPlugInsFolderURL;
+ (id)plugInsFolderURLs;

- (id)_createDefaultSearchableURLsDict;
- (id)_createDefaultSupportBuiltInsDict;
- (id)_findGroupInList:(id)arg1 withIdenticalDescriptor:(id)arg2;
- (id)_fxMetaPlugWrapperForPlugInTypeUUID:(id)arg1;
- (id)_fxPlugGroupListForOptionalFlavor:(id)arg1;
- (bool)allowBuiltInEffectsForPlugInTypeUUID:(id)arg1;
- (void)dealloc;
- (id)defaultSearchableURLsForPlugInTypeUUID:(id)arg1;
- (id)defaultSupportedPlugInTypeUUIDs;
- (id)domainOfDefinitionForSample:(id)arg1;
- (double)durationForStream:(id)arg1;
- (id)evaluateSample:(id)arg1 withOptions:(id)arg2;
- (unsigned long long)fieldOrderForSample:(id)arg1;
- (double)frameDurationForStream:(id)arg1;
- (id)fxPlugDescriptorWithUUID:(id)arg1;
- (id)fxPlugGroupList;
- (id)fxPlugGroupListForFlavor:(id)arg1;
- (double)globalFrameDuration;
- (unsigned int)globalTimeScale;
- (id)hostName;
- (id)init;
- (void)invalidateFxPlugDescriptorArray;
- (bool)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
- (bool)isSamplePredetermined:(id)arg1;
- (bool)isStreamPremultiplied:(id)arg1;
- (int)majorVersion;
- (int)minorVersion;
- (double)pixelAspectForStream:(id)arg1;
- (id)requiredSamplesForSample:(id)arg1;
- (void)scanFxPlugsIfNecessary;
- (id)searchableURLsForPlugInTypeUUID:(id)arg1;
- (void)setAllowBuiltInEffects:(bool)arg1 forPlugInTypeUUID:(id)arg2;
- (void)setSearchableURLs:(id)arg1 forPlugInTypeUUID:(id)arg2;
- (void)setSupportedPlugInTypeUUIDs:(id)arg1;
- (double)startTimeForStream:(id)arg1;
- (id)supportedPlugInTypeUUIDs;
- (bool)supportsParameterClass:(Class)arg1;
- (unsigned int)timeScaleForStream:(id)arg1;
- (id)uniqueID;

@end
