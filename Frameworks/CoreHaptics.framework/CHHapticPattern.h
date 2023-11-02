
@interface CHHapticPattern : NSObject <CHHapticPlayable> {
    NSURL * _ahapBaseURL;
    NSDictionary * _configurationDictionary;
    NSMutableArray * _embeddedResourceInfo;
    NSMutableArray * _events;
    NSMutableArray * _parameterCurves;
    NSMutableArray * _parameters;
    NSString * _patternID;
    NSNumber * _version;
}

@property (readonly) NSString *audioPowerUsage;
@property (nonatomic, readonly) NSDictionary *configurationDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) NSArray *events;
@property (readonly) NSString *hapticPowerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *locality;
@property (readonly) NSArray *parameterCurves;
@property (readonly) NSArray *parameters;
@property (readonly) NSString *patternID;
@property (readonly) NSString *priority;
@property (readonly) Class superclass;
@property (readonly) NSString *usageCategory;
@property (readonly) float version;

+ (id)addHapticsForWheelsOfTime:(id)arg1;
+ (id)eventListFromEvents:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 engine:(id)arg4 privileged:(bool)arg5;
+ (id)patternForKey:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)audioPowerUsage;
- (id)configurationDictionary;
- (bool)doInitWithDictionary:(id)arg1 error:(id*)arg2;
- (double)duration;
- (id)eventListFromDictionary:(id)arg1 error:(id*)arg2;
- (id)events;
- (id)exportDictionaryAndReturnError:(id*)arg1;
- (id)exportDictionaryWithConfigurationAndReturnError:(id*)arg1;
- (id)hapticPowerUsage;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithEvents:(id)arg1 parameterCurves:(id)arg2 error:(id*)arg3;
- (id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)locality;
- (id)parameterCurves;
- (id)parameters;
- (id)patternID;
- (id)priority;
- (id)resolveExternalResources:(id)arg1 error:(id*)arg2;
- (id)usageCategory;
- (float)version;

@end
