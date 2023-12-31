
@interface CBClient : NSObject {
    CBAdaptationClient * _adaptationClient;
    CBBlueLightClient * _blueLightClient;
    BrightnessSystemClient * bsc;
}

@property (readonly) CBAdaptationClient *adaptationClient;
@property (readonly) CBBlueLightClient *blueLightClient;

+ (bool)supportsAdaptation;
+ (bool)supportsBlueLightReduction;

- (id)adaptationClient;
- (id)blueLightClient;
- (void)dealloc;
- (id)init;

@end
