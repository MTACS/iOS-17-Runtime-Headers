
@interface CRFormPostProcessingManager : NSObject {
    NSArray * _sequence;
}

@property (nonatomic, retain) NSArray *sequence;

+ (void)enumerateAllFieldsInFields:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateContourBasedDetectedFields:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateDetectedFields:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateExternalFields:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateFieldsInFields:(id)arg1 filter:(id /* block */)arg2 block:(id /* block */)arg3;
+ (void)enumerateTextBasedDetectedFields:(id)arg1 block:(id /* block */)arg2;
+ (void)logFieldStatistics:(id)arg1;
+ (id)postProcessingManagerWithDefaultSequence;

- (void).cxx_destruct;
- (id)initWithSequence:(id)arg1;
- (id)initWithStep:(id)arg1;
- (id)process:(id)arg1 document:(id)arg2 options:(id)arg3;
- (id)process:(id)arg1 externalFields:(id)arg2 document:(id)arg3 options:(id)arg4;
- (id)sequence;
- (void)setSequence:(id)arg1;

@end
