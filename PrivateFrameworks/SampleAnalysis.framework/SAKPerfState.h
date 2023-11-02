
@interface SAKPerfState : NSObject {
    unsigned long long  _latestMachAbsTimeParsed;
    bool  _mostRecentSampleIsPET;
    SATimestamp * _mostRecentSampleTimestamp;
    unsigned int  _numCores;
    char * _onCoreBitArray;
    int  _petTimerID;
    struct ktrace_session { } * _session;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
