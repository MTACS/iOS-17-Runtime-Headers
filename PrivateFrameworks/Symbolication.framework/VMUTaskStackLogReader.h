
@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader> {
    unsigned long long  _msl_payload_version;
    VMUTaskMemoryScanner * _scanner;
}

@property (readonly) bool coldestFrameIsNotThreadId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *excludedFrames;
@property (readonly) unsigned long long hash;
@property (readonly) bool inspectingLiveProcess;
@property (readonly) bool is64bit;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (nonatomic) VMUTaskMemoryScanner *scanner;
@property (readonly) Class superclass;
@property (readonly) struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } symbolicator;
@property (readonly) unsigned int task;
@property (readonly) bool usesCoreFile;
@property (readonly) bool usesLiteMode;

- (void).cxx_destruct;
- (void)dealloc;
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)inspectingLiveProcess;
- (bool)is64bit;
- (struct { unsigned long long x1; })liteMSLPayloadforMallocAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (struct { unsigned long long x1; })liteMSLPayloadforVMregionAddress:(unsigned long long)arg1;
- (unsigned long long)nodesInUniquingTable;
- (id)regionTracker;
- (id)scanner;
- (void)setScanner:(id)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end
