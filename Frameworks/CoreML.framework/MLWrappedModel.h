
@interface MLWrappedModel : MLModel {
    MLModel * _innerModel;
    NSString * _reason;
}

@property (retain) MLModel *innerModel;
@property (nonatomic, retain) NSString *reason;

- (void).cxx_destruct;
- (void)clearInnerModelWithReason:(id)arg1;
- (id)initWithInnerModel:(id)arg1;
- (id)innerModel;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)reason;
- (void)setInnerModel:(id)arg1;
- (void)setReason:(id)arg1;

@end
