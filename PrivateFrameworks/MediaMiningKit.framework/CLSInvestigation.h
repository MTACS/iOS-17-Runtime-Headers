
@interface CLSInvestigation : NSObject {
    CLSClueCollection * _clueCollection;
    id  _context;
    <CLSInvestigationDelegate> * _delegate;
    bool  _enableDebuggingClues;
    CLSInvestigationFeeder * _feeder;
    CLSInvestigationHelper * _helper;
    NSArray * _informants;
    CLSInspector * _inspector;
    <CLSInvestigationInterviewDelegate> * _interviewDelegate;
    struct { 
        unsigned int delegateWillBegin : 1; 
        unsigned int delegateDidEnd : 1; 
        unsigned int delegateNumberOfItems : 1; 
        unsigned int delegateSampleOfItems : 1; 
    }  _investigationFlags;
    unsigned long long  _precision;
    NSMutableArray * _profiles;
    NSMutableDictionary * _tracesLogsByURIs;
    NSMutableArray * _tracesLogsURIs;
    NSString * _uuid;
}

@property (readonly, retain) CLSClueCollection *clueCollection;
@property (nonatomic, retain) id context;
@property (nonatomic) <CLSInvestigationDelegate> *delegate;
@property bool enableDebuggingClues;
@property (nonatomic, readonly, retain) CLSInvestigationFeeder *feeder;
@property (readonly) CLSInvestigationHelper *helper;
@property (nonatomic, readonly) CLSInspector *inspector;
@property (nonatomic) <CLSInvestigationInterviewDelegate> *interviewDelegate;
@property (nonatomic) unsigned long long precision;
@property (nonatomic, readonly, retain) NSArray *profiles;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (id)investigationWithProfiles:(id)arg1 clueDates:(id)arg2 clueLocations:(id)arg3 cluePeoples:(id)arg4 helper:(id)arg5;
+ (id)investigationWithProfiles:(id)arg1 helper:(id)arg2;

- (void).cxx_destruct;
- (void)_didEndInvestigation:(bool)arg1;
- (id)_traceStringForType:(unsigned long long)arg1;
- (void)_willBeginInvestigation:(id)arg1;
- (void)addTraceFromObject:(id)arg1 feature:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 withDescriptionFormat:(id)arg5;
- (id)clueCollection;
- (id)context;
- (id)delegate;
- (id)description;
- (id)description:(bool)arg1;
- (bool)enableDebuggingClues;
- (id)feeder;
- (id)helper;
- (id)initWithClueCollection:(id)arg1 profiles:(id)arg2 helper:(id)arg3;
- (id)initWithFeeder:(id)arg1 profiles:(id)arg2 helper:(id)arg3;
- (id)initWithHelper:(id)arg1;
- (id)initWithProfiles:(id)arg1 helper:(id)arg2;
- (id)inspector;
- (id)interviewDelegate;
- (unsigned long long)numberOfItems;
- (unsigned long long)precision;
- (id)profiles;
- (id)sampleOfItems;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableDebuggingClues:(bool)arg1;
- (void)setInterviewDelegate:(id)arg1;
- (void)setPrecision:(unsigned long long)arg1;
- (id)tracesDescription;
- (id)uuid;

@end
