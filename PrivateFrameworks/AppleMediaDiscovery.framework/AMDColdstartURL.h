
@interface AMDColdstartURL : NSManagedObject

@property (nonatomic, copy) NSString *modelId;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *version;

+ (id)deleteAllColdstartUrls:(id*)arg1;
+ (void)deleteColdstartURLs:(id)arg1 error:(id*)arg2;
+ (id)deleteWithPredicate:(id)arg1 error:(id*)arg2;
+ (id)fetchAll:(id*)arg1;
+ (id)fetchRequest;
+ (id)getColdstartURLForModel:(id)arg1 error:(id*)arg2;
+ (id)getCurrentURLInfoByModelId;
+ (void)saveColdstartURL:(id)arg1 error:(id*)arg2;

@end
