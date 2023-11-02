
@interface FedStatsDataTypeFactory : NSObject

+ (id)createFedStatsDataType:(id)arg1 dataTypeParams:(id)arg2 possibleError:(id*)arg3;
+ (long long)dataTypeFromString:(id)arg1;
+ (id)stringFromDataType:(long long)arg1;

@end
