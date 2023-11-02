
@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    id * _additionalPrivateIvars;
    unsigned long long  _percentageOfDB;
    struct __persistentHistoryChangeRequestDescriptionFlags { 
        unsigned int _useQueryGenerationToken : 1; 
        unsigned int _deleteHistoryRequest : 1; 
        unsigned int _fetchTransactionForToken : 1; 
        unsigned int _percentageDeleteHistoryRequest : 1; 
        unsigned int _reservedPersistentHistoryChangeRequestDescription : 28; 
    }  _persistentHistoryChangeRequestDescriptionFlags;
    long long  _resultType;
    NSPersistentHistoryToken * _token;
    NSArray * _transactionIDs;
    NSNumber * _transactionNumber;
}

@property (nonatomic, retain) NSFetchRequest *fetchRequest;
@property long long resultType;
@property (readonly) NSPersistentHistoryToken *token;

+ (id)_stringForHistoryRequestResultType:(long long)arg1;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 withPolicy:(id)arg3;
+ (id)deleteHistoryBeforeDate:(id)arg1;
+ (id)deleteHistoryBeforeDate:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2;
+ (id)deleteHistoryBeforeToken:(id)arg1;
+ (id)deleteHistoryBeforeToken:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2;
+ (id)deleteHistoryBeforeTransaction:(id)arg1;
+ (id)fetchHistoryAfterDate:(id)arg1;
+ (id)fetchHistoryAfterToken:(id)arg1;
+ (id)fetchHistoryAfterTransaction:(id)arg1;
+ (id)fetchHistoryTransactionForToken:(id)arg1;
+ (id)fetchHistoryWithFetchRequest:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)encodeForXPC;
- (id)entityNameToFetch;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (id)fetchRequest;
- (bool)includesSubentities;
- (id)init;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 delete:(bool)arg2;
- (id)initWithDate:(id)arg1 delete:(bool)arg2 percentageOfDB:(unsigned long long)arg3;
- (id)initWithFetchRequest:(id)arg1;
- (id)initWithToken:(id)arg1;
- (id)initWithToken:(id)arg1 delete:(bool)arg2;
- (id)initWithToken:(id)arg1 delete:(bool)arg2 percentageOfDB:(unsigned long long)arg3;
- (id)initWithTransactionID:(id)arg1 delete:(bool)arg2 transactionOnly:(bool)arg3 percentageOfDB:(unsigned long long)arg4;
- (id)initWithTransactionIDs:(id)arg1;
- (id)initWithTransactionToken:(id)arg1;
- (bool)isDelete;
- (bool)isEqual:(id)arg1;
- (bool)isFetchTransactionForToken;
- (bool)isPercentageDelete;
- (unsigned long long)percentageOfDB;
- (id)predicate;
- (id)predicateForStoreIdentifier:(id)arg1;
- (id)propertiesToFetch;
- (id)propertiesToFetchForEntity:(id)arg1;
- (id)propertiesToFetchForEntity:(id)arg1 includeTransactionStrings:(bool)arg2;
- (unsigned long long)requestType;
- (long long)resultType;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFetchOffset:(unsigned long long)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setResultType:(long long)arg1;
- (void)setUseQueryGenerationToken:(bool)arg1;
- (id)token;
- (id)transactionIDs;
- (id)transactionNumber;
- (bool)useQueryGenerationToken;

@end
