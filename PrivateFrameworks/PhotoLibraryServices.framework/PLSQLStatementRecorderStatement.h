
@interface PLSQLStatementRecorderStatement : NSObject {
    unsigned long long  _backtraceHash;
    double  _duration;
    NSArray * _firstBacktrace;
    unsigned int  _fullscanSteps;
    bool  _isSearch;
    NSString * _mocName;
    NSString * _normalizedStatementSQL;
    long long  _pagesHit;
    long long  _pagesMissed;
    long long  _photoLibraryID;
    unsigned int  _qos;
    NSString * _queryPlan;
    NSString * _statementSQL;
    NSString * _statusMessage;
    double  _time;
    unsigned int  _vmSteps;
}

@property (nonatomic) unsigned long long backtraceHash;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSArray *firstBacktrace;
@property (nonatomic) unsigned int fullscanSteps;
@property (nonatomic, readonly) bool isInternal;
@property (nonatomic) bool isSearch;
@property (nonatomic, retain) NSString *mocName;
@property (nonatomic, retain) NSString *normalizedStatementSQL;
@property (nonatomic) long long pagesHit;
@property (nonatomic) long long pagesMissed;
@property (nonatomic) long long photoLibraryID;
@property (nonatomic) unsigned int qos;
@property (nonatomic, retain) NSString *queryPlan;
@property (nonatomic, retain) NSString *statementSQL;
@property (nonatomic, retain) NSString *statusMessage;
@property (nonatomic) double time;
@property (nonatomic) unsigned int vmSteps;

+ (bool)isInternalForStatementSQL:(id)arg1;
+ (long long)libraryForDbURL:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (unsigned long long)backtraceHash;
- (double)duration;
- (id)firstBacktrace;
- (unsigned int)fullscanSteps;
- (bool)isInternal;
- (bool)isSearch;
- (id)jsonFragmentData;
- (id)mocName;
- (id)normalizedStatementSQL;
- (long long)pagesHit;
- (long long)pagesMissed;
- (long long)photoLibraryID;
- (unsigned int)qos;
- (id)queryPlan;
- (void)setBacktraceHash:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setFirstBacktrace:(id)arg1;
- (void)setFullscanSteps:(unsigned int)arg1;
- (void)setIsSearch:(bool)arg1;
- (void)setMocName:(id)arg1;
- (void)setNormalizedStatementSQL:(id)arg1;
- (void)setPagesHit:(long long)arg1;
- (void)setPagesMissed:(long long)arg1;
- (void)setPhotoLibraryID:(long long)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setQueryPlan:(id)arg1;
- (void)setStatementSQL:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setVmSteps:(unsigned int)arg1;
- (id)statementSQL;
- (id)statusMessage;
- (double)time;
- (unsigned int)vmSteps;

@end
