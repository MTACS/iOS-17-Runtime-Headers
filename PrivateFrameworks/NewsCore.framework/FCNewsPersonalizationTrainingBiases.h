
@interface FCNewsPersonalizationTrainingBiases : NSObject {
    NSDictionary * _biases;
}

@property (nonatomic, retain) NSDictionary *biases;

+ (id)identifiersForEventType:(id)arg1 feedType:(id)arg2 groupType:(id)arg3;

- (void).cxx_destruct;
- (double)biasForEventType:(id)arg1 feedType:(id)arg2 groupType:(id)arg3;
- (id)biases;
- (id)description;
- (id)initWithBiases:(id)arg1;
- (void)setBiases:(id)arg1;

@end
