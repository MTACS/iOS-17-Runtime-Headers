
@interface DTKPKTraceFileAggregator : NSObject <DTKPKtraceAggregator> {
    <DTKPConfiguration> * _config;
    DVTFileStream * _fileStream;
    bool  _kperfSample;
    int  _ktraceFD;
    DTKTraceSessionCreator * _ktraceSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;
- (id)pause;
- (id)resume;
- (id)start;
- (int)startKtraceSession:(char *)arg1 useExisting:(bool)arg2 outputFD:(int*)arg3;
- (id)stop;
- (int)stopKtraceSession;
- (id)swapOutCurrentDatastream:(id*)arg1;

@end
