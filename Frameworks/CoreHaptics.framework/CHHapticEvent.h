
@interface CHHapticEvent : NSObject <CHHapticPlayable> {
    unsigned long long  _audioResID;
    double  _duration;
    NSArray * _eventParams;
    double  _time;
    NSString * _type;
}

@property (readonly) NSString *audioPowerUsage;
@property (readonly) unsigned long long audioResID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (readonly) NSArray *eventParameters;
@property (readonly) NSArray *events;
@property (readonly) double fullDuration;
@property (readonly) NSString *hapticPowerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *locality;
@property (readonly) NSArray *parameterCurves;
@property (readonly) NSArray *parameters;
@property (readonly) NSString *patternID;
@property (readonly) NSString *priority;
@property double relativeTime;
@property (readonly) Class superclass;
@property (readonly) NSString *type;
@property (readonly) NSString *usageCategory;

+ (bool)parameterValuesFromLegacyEventType:(unsigned long long)arg1 sharpness:(float*)arg2 fullness:(float*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)audioPowerUsage;
- (unsigned long long)audioResID;
- (double)duration;
- (id)eventParameters;
- (id)events;
- (double)fullDuration;
- (id)getType;
- (id)hapticPowerUsage;
- (id)init;
- (id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3;
- (id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4;
- (id)initWithAudioResourceIndex:(unsigned long long)arg1 parameters:(id)arg2 time:(double)arg3 duration:(double)arg4;
- (id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3;
- (id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4;
- (id)locality;
- (id)parameterCurves;
- (id)parameters;
- (id)patternID;
- (id)priority;
- (double)relativeTime;
- (id)resolveExternalResources:(id)arg1 error:(id*)arg2;
- (void)setDuration:(double)arg1;
- (void)setRelativeTime:(double)arg1;
- (id)type;
- (id)usageCategory;

@end
