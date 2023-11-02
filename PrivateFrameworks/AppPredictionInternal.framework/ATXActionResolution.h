
@interface ATXActionResolution : NSObject {
    <ATXPredictionContextBuilderProtocol> * _predictionContextBuilder;
    ATXSlotResolution * _slotResolver;
}

- (void).cxx_destruct;
- (id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(bool)arg7 currentDate:(id)arg8;
- (id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(bool)arg7 predictionItemsToKeep:(void*)arg8 currentDate:(id)arg9;
- (id)init;
- (id)initWithSlotResolver:(id)arg1 predictionContextBuilder:(id)arg2;
- (id)statisticsForActionKey:(id)arg1;
- (id)statisticsForActionKey:(id)arg1 context:(id)arg2;

@end
