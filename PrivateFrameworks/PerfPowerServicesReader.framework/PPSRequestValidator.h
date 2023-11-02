
@interface PPSRequestValidator : NSObject

+ (bool)_isMetricDefinedForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3 name:(id)arg4;
+ (bool)_validateFilepath:(id)arg1 error:(id*)arg2;
+ (bool)_validatePredicateRequiredKey:(id)arg1 value:(id)arg2 error:(id*)arg3;
+ (bool)_validatePredicateValue:(id)arg1 metricDefinition:(id)arg2 error:(id*)arg3;
+ (bool)_validateRequestType:(long long)arg1 error:(id*)arg2;
+ (id)sharedInstance;

- (bool)validateDataRequest:(id)arg1 filepath:(id)arg2 withError:(id*)arg3;

@end
