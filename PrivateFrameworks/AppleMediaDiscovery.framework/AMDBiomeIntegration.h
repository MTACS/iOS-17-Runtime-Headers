
@interface AMDBiomeIntegration : NSObject

+ (id)createRowSetFrom:(id)arg1 withFetchDescriptor:(id)arg2;
+ (id)fetchDataFromStream:(id)arg1 usingDescriptor:(id)arg2 error:(id*)arg3;
+ (id)fetchLatestEventTimestampFromEvents:(id)arg1;
+ (id)fetchLatestRowsFromStream:(id)arg1 withFields:(id)arg2 withBiomeTimestampDict:(id)arg3 error:(id*)arg4;
+ (id)queryBiomeFor:(id)arg1 withError:(id*)arg2;
+ (id)queryBiomeStream:(id)arg1 withEventFields:(id)arg2 fromTimestamp:(id)arg3 error:(id*)arg4;
+ (id)runBiomeQuery:(id)arg1 error:(id*)arg2;

@end
