
@interface DRSEnableDataGatheringQuery : NSObject <DRSDSRequestObject> {
    unsigned short  _attemptCount;
    NSString * _build;
    NSDictionary * _contextDictionary;
    NSData * _contextDictionaryData;
    bool  _isContinue;
    NSString * _issueCategory;
    NSString * _logType;
    NSDate * _queryDate;
    NSUUID * _queryID;
    NSString * _rejectionReason;
    unsigned char  _response;
    NSString * _teamID;
}

@property (nonatomic, readonly) unsigned short attemptCount;
@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) NSDictionary *contextDictionary;
@property (nonatomic, readonly) NSData *contextDictionaryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *functionName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContinue;
@property (nonatomic, readonly) NSString *issueCategory;
@property (nonatomic, readonly) NSString *logType;
@property (nonatomic, readonly) <DRSDecisionServerBatchRequest> *pbBatchInstance;
@property (nonatomic, readonly) Class pbBatchResponseClass;
@property (nonatomic, readonly) PBRequest *pbRequest;
@property (nonatomic, readonly) NSDate *queryDate;
@property (nonatomic, readonly) NSUUID *queryID;
@property (nonatomic, retain) NSString *rejectionReason;
@property (nonatomic) unsigned char response;
@property (nonatomic, readonly) NSString *responseString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) NSUUID *uniqueID;

+ (id)_ON_MOC_QUEUE_enableDataGatheringQueriesForFilterPredicate:(id)arg1 context:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 errorOut:(id*)arg5;
+ (id)_ON_MOC_QUEUE_enableDataGatheringQueryForID:(id)arg1 context:(id)arg2;
+ (id)cachedQueryResponseForQuery:(id)arg1 inContext:(id)arg2 errorOut:(id*)arg3;
+ (id)enableDataGatheringQueriesForFilterPredicate:(id)arg1 context:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 errorOut:(id*)arg5;
+ (id)enableDataGatheringQueryForID:(id)arg1 context:(id)arg2;
+ (id)entityName;
+ (id)leastRecentDateFirstSortDescriptor;
+ (id)mostRecentDateFirstSortDescriptor;

- (void).cxx_destruct;
- (id)_initWithMO_ON_MOC_QUEUE:(id)arg1;
- (unsigned short)attemptCount;
- (id)build;
- (id)contextDictionary;
- (id)contextDictionaryData;
- (id)debugDescription;
- (bool)doesMatchCachedQuery:(id)arg1;
- (id)functionName;
- (id)initWithXPCDict:(id)arg1;
- (bool)isContinue;
- (bool)isEqualToDataGatheringQuery:(id)arg1;
- (id)issueCategory;
- (id)jsonCompatibleDictionaryRepresentation;
- (id)logType;
- (id)pbBatchInstance;
- (Class)pbBatchResponseClass;
- (id)pbRequest;
- (id)protobufRepresentation;
- (id)queryDate;
- (void)queryFinishedWithDecision:(id)arg1 error:(id)arg2;
- (id)queryID;
- (id)rejectionReason;
- (unsigned char)response;
- (id)responseString;
- (void)setIsContinue:(bool)arg1;
- (void)setRejectionReason:(id)arg1;
- (void)setResponse:(unsigned char)arg1;
- (bool)submitQuery;
- (id)teamID;
- (id)uniqueID;
- (void)updateContextWithDataGatheringQuery_ON_MOC_QUEUE:(id)arg1;

@end
