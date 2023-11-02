
@interface HMIDESDataset : HMFObject <HMFLogging> {
    NSString * _boxesName;
    NSString * _classesName;
    NSString * _imageName;
    NSArray * _samples;
    NSString * _weightsName;
}

@property (readonly) NSString *boxesName;
@property (readonly) NSString *classesName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *imageName;
@property (readonly) NSArray *samples;
@property (readonly) Class superclass;
@property (readonly) NSString *weightsName;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)boxesName;
- (id)classesName;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)imageName;
- (id)initWithSamples:(id)arg1 imageName:(id)arg2 boxesName:(id)arg3 weightsName:(id)arg4 classesName:(id)arg5;
- (unsigned long long)numberOfDataPoints;
- (id)samples;
- (id)weightsName;

@end
