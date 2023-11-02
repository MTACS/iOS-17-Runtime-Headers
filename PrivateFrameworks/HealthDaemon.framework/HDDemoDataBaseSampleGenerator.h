
@interface HDDemoDataBaseSampleGenerator : NSObject <HDDemoDataObjectGenerator> {
    bool  _createdFromNSKeyedUnarchiver;
    HDDemoDataGenerator * _demoDataGenerator;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) HDDemoDataGenerator *demoDataGenerator;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_createdFromNSKeyedUnarchiver;
- (bool)createdFromNSKeyedUnarchiver;
- (id)demoDataGenerator;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)profile;
- (void)setDemoDataGenerationContextWithProfile:(id)arg1 generatorState:(id)arg2;
- (void)setDemoDataGenerator:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
