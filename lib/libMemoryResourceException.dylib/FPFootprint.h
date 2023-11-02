
@interface FPFootprint : NSObject {
    bool  _earlyExit;
    FPTime * _gatherEndTime;
    FPTime * _gatherStartTime;
    struct __CFDictionary { } * _linkeditMemoryObjects;
    struct __CFDictionary { } * _memoryObjects;
    NSMutableArray * _outputFormatters;
    NSMutableDictionary * _pidToFootprint;
    NSArray * _processes;
    unsigned int  _qualityOfService;
    NSMutableDictionary * _sharedCacheMemoryObjectsTable;
    struct __CFDictionary { } * _textMemoryObjects;
}

@property (nonatomic, readonly) FPTime *gatherEndTime;
@property (nonatomic, readonly) FPTime *gatherStartTime;
@property (nonatomic, readonly) NSArray *processes;
@property (nonatomic) unsigned int qualityOfService;

+ (bool)breakDownPhysFootprint;
+ (id)installCancelHandler:(id /* block */)arg1;
+ (bool)isSharingAnalysisDisabled;
+ (void)setBreakDownPhysFootprint:(bool)arg1;
+ (void)setSharingAnalysisDisabled:(bool)arg1;

- (void).cxx_destruct;
- (void)addOutputFormatter:(id)arg1;
- (void)analyzeData;
- (void)cancel;
- (void)dealloc;
- (bool)gatherData;
- (id)gatherEndTime;
- (id)gatherStartTime;
- (id)initWithProcesses:(id)arg1;
- (void)printOutputVerbose:(bool)arg1 summarize:(bool)arg2 noCategories:(bool)arg3;
- (id)processes;
- (unsigned int)qualityOfService;
- (void)setQualityOfService:(unsigned int)arg1;

@end
