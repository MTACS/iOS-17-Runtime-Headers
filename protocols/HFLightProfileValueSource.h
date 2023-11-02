
@protocol HFLightProfileValueSource <NSObject>

@required

- (void)fetchNaturalLightColorTemperatureForBrightness:(void *)arg1 lightProfile:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, HMLightProfile *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIColor *, void*
- (bool)isNaturalLightingEnabledForProfile:(HMLightProfile *)arg1;
- (bool)isNaturalLightingSupportedForProfile:(HMLightProfile *)arg1;
- (NAFuture *)writeNaturalLightEnabledState:(bool)arg1 forProfile:(HMLightProfile *)arg2;

@end
