
@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader> {
    struct vmu_backtrace_uniquing_table_t { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned int x10; struct _opaque_pthread_rwlock_t { long long x_11_1_1; BOOL x_11_1_2[192]; } x11; } * _backtraceUniquingTable;
    VMUDebugTimer * _debugTimer;
    NSData * _diskLogs;
    VMURangeToStringMap * _functionNameRanges;
    VMUProcessObjectGraph * _graph;
    unsigned long long  _maxTimestampDelta;
    unsigned long long  _mslRecordsCount;
    unsigned int  _nodeNamespaceSize;
    unsigned long long * _nodeToMSLPayloadTable;
    unsigned int * _nodeToStackIndexTable;
    unsigned long long * _nodeToTimestampTable;
    struct backtrace_uniquing_table { } * _originalUniquingTable;
    VMURangeToStringMap * _sourceInfoRanges;
}

@property (readonly) bool coldestFrameIsNotThreadId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *diskLogs;
@property (nonatomic, retain) NSSet *excludedFrames;
@property (nonatomic) VMUProcessObjectGraph *graph;
@property (readonly) unsigned long long hash;
@property (readonly) bool inspectingLiveProcess;
@property (readonly) bool is64bit;
@property (nonatomic, readonly) unsigned long long maxTimestampDelta;
@property (nonatomic, readonly) unsigned long long mslRecordsCount;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) Class superclass;
@property (readonly) struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } symbolicator;
@property (readonly) unsigned int task;
@property (readonly) bool usesCoreFile;
@property (readonly) bool usesLiteMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned int*)arg2;
- (void)_setFunctionName:(id)arg1 forPCAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSourcePath:(id)arg1 lineNumber:(unsigned int)arg2 forPCAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (bool)containsTimestampsByNode;
- (bool)copyOriginalUniquingTable:(id)arg1;
- (void)dealloc;
- (id)diskLogs;
- (void)encodeWithCoder:(id)arg1;
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)arg1;
- (void)enumerateUniquingTable:(id /* block */)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (id)graph;
- (id)initWithCoder:(id)arg1;
- (id)initWithCore:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2 graph:(id)arg3 debugTimer:(id)arg4 zones:(struct _VMUZoneNode { unsigned long long x1; id x2; struct malloc_introspection_t {} *x3; }*)arg5 zonesCount:(unsigned int)arg6;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2 graph:(id)arg3 debugTimer:(id)arg4 collectDisklogs:(bool)arg5;
- (bool)inspectingLiveProcess;
- (bool)is64bit;
- (unsigned long long)maxTimestampDelta;
- (unsigned long long)mslRecordsCount;
- (unsigned long long)nodesInUniquingTable;
- (bool)populateBacktraceUniquingTableWithCore:(id)arg1 zones:(struct _VMUZoneNode { unsigned long long x1; id x2; struct malloc_introspection_t {} *x3; }*)arg2 zonesCount:(unsigned int)arg3;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)arg1;
- (void)setDiskLogs:(id)arg1;
- (void)setGraph:(id)arg1;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(bool)arg2;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })sourceLineRangeContainingPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (unsigned long long)stackIDForNode:(unsigned int)arg1;
- (void)streamFullStackLogsToBlock:(id /* block */)arg1;
- (void)symbolicateBacktraceUniquingTable;
- (unsigned long long)timestampForNode:(unsigned int)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end
