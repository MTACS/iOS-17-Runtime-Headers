
@interface HVConsumerReply : NSObject {
    NSNumber * _contentWasProcessed;
    NSError * _error;
    NSNumber * _numberOfExtractions;
    bool  _success;
}

@property (nonatomic, retain) NSNumber *contentWasProcessed;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSNumber *numberOfExtractions;
@property (nonatomic) bool success;

+ (id)failedWithError:(id)arg1;
+ (id)ignored;
+ (id)interrupted;
+ (id)successWithNumberOfExtractions:(id)arg1;

- (void).cxx_destruct;
- (id)contentWasProcessed;
- (id)error;
- (id)init;
- (id)initWithSuccess:(bool)arg1 contentWasProcessed:(id)arg2 numberOfExtractions:(id)arg3 error:(id)arg4;
- (id)numberOfExtractions;
- (void)setContentWasProcessed:(id)arg1;
- (void)setError:(id)arg1;
- (void)setNumberOfExtractions:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
