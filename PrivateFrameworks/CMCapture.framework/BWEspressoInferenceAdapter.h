
@interface BWEspressoInferenceAdapter : NSObject

+ (bool)allowE5ForInferenceType:(int)arg1;
+ (id)espressoNetworkURLForPlatformedResourceBaseName:(id)arg1 embedPlatformOrDeviceID:(bool)arg2;
+ (struct { unsigned short x1; unsigned short x2; unsigned short x3; })findAvailableVersion:(id)arg1 defaultOverrideKey:(id)arg2 versionLocator:(id /* block */)arg3 e5Bundle:(bool)arg4;
+ (void)initialize;
+ (id)locateNetworkFileFromFormat:(id)arg1 defaultOverrideKey:(id)arg2 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg3 e5Bundle:(bool)arg4;

- (id)inferenceProviderForType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5;
- (id)inferenceProvidersForType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5;

@end
