
@interface AMDStorage : NSObject

+ (unsigned int)deleteCoreDataRecordsFrom:(id)arg1 usingPredicates:(id)arg2 error:(id*)arg3;
+ (unsigned int)deleteRecordsFrom:(id)arg1 usingPredicates:(id)arg2 error:(id*)arg3;
+ (id)fetchCoreDataRecordsFrom:(id)arg1 error:(id*)arg2;
+ (id)fetchRecordsFrom:(id)arg1 error:(id*)arg2;
+ (unsigned int)saveRecords:(id)arg1 inTable:(id)arg2 error:(id*)arg3;
+ (unsigned int)saveRecordsToCoreData:(id)arg1 inTable:(id)arg2 error:(id*)arg3;

@end
