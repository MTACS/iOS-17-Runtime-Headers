
@interface SASamplePrinter : NSObject {
    bool  _avoided65324447;
    NSMutableDictionary * _binaryImagesHit;
    bool  _hasFilterApplied;
    NSString * _headerNote;
    SATask * _heaviestTask;
    SAThread * _heaviestThread;
    NSUUID * _incidentUUID;
    NSMutableDictionary * _indexForImage;
    double  _minimumSamplingInterval;
    unsigned long long  _numSamples;
    SASamplePrintOptions * _options;
    bool  _potentiallyHit65324447;
    unsigned long long  _reportEndSampleIndex;
    SATimestamp * _reportEndTime;
    unsigned long long  _reportStartSampleIndex;
    SATimestamp * _reportStartTime;
    SASampleStore * _sampleStore;
    bool  _shareWithAppDevs;
    SAOutputStream * _stream;
    SAHIDEvent * _targetHIDEvent;
    NSMutableArray * _targetHidStepSamples;
    NSMutableArray * _timeJumps;
}

@property (copy) NSString *headerNote;
@property (copy) NSUUID *incidentUUID;
@property (copy) SASamplePrintOptions *options;
@property (readonly) SASampleStore *sampleStore;
@property bool shareWithAppDevs;

- (void).cxx_destruct;
- (id)callTreeForDispatchQueue:(id)arg1 andThread:(id)arg2 inTask:(id)arg3;
- (id)callTreeForDispatchQueue:(id)arg1 swiftTask:(id)arg2 thread:(id)arg3 inTask:(id)arg4;
- (id)callTreeForExecutable:(id)arg1;
- (id)callTreeForSwiftTask:(id)arg1 thread:(id)arg2 inTask:(id)arg3;
- (id)callTreeForTask:(id)arg1;
- (id)callTreeForThread:(id)arg1 inTask:(id)arg2;
- (id)callTreesForThreadsInTask:(id)arg1;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)filterToMachAbsTimeRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)filterToTimestampRangeStart:(id)arg1 end:(id)arg2;
- (void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2;
- (id)headerNote;
- (id)incidentUUID;
- (id)initWithSampleStore:(id)arg1;
- (id)options;
- (void)printToMutableData:(id)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)sampleStore;
- (void)setHeaderNote:(id)arg1;
- (void)setIncidentUUID:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setShareWithAppDevs:(bool)arg1;
- (bool)shareWithAppDevs;

@end
