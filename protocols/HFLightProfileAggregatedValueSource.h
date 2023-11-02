
@protocol HFLightProfileAggregatedValueSource <NSObject>

@required

- (void)fetchNaturalLightColorTemperatureForBrightness:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIColor *, void*
- (bool)isNaturalLightingEnabled;
- (bool)isNaturalLightingSupported;
- (NSSet *)lightProfiles;
- (NAFuture *)writeNaturalLightEnabledState:(bool)arg1;

@end
