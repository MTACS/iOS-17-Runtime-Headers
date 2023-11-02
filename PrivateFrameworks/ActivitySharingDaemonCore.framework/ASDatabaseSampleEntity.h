
@interface ASDatabaseSampleEntity : NSObject

+ (bool)deleteSamplesOfType:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 deletedSampleCount:(unsigned long long*)arg4 error:(id*)arg5;
+ (bool)enumerateSamplesOfType:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 anchor:(id*)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
+ (bool)enumerateSamplesOfTypes:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 anchor:(id*)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
+ (id)samplesOfType:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 anchor:(id*)arg4 error:(id*)arg5;
+ (id)samplesOfTypes:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 anchor:(id*)arg4 error:(id*)arg5;

@end
