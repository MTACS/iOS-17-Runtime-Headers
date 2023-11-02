
@interface VMUStackLogReaderBase : NSObject <VMUStackLogReader> {
    NSMapTable * _addressToSymbolicationMap;
    NSMutableDictionary * _binaryImagePathToIdentifierMap;
    bool  _coldestFrameIsNotThreadId;
    NSSet * _excludedFrames;
    VMUVMRegionTracker * _regionTracker;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned int  _task;
    bool  _usesCoreFile;
    bool  _usesLiteMode;
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
@property (readonly) Class superclass;
@property (readonly) struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } symbolicator;
@property (readonly) unsigned int task;
@property (readonly) bool usesCoreFile;
@property (readonly) bool usesLiteMode;

- (void).cxx_destruct;
- (id)_allocationTypeNameForStackID:(unsigned long long)arg1 returnedBinaryPath:(id*)arg2;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (bool)coldestFrameIsNotThreadId;
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)arg1;
- (id)excludedFrames;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (id)identifierForBinaryImagePath:(id)arg1;
- (void)identifyNonObjectsUsingStackBacktraces:(id)arg1 classInfoMap:(id)arg2 classInfoSetterBlock:(id /* block */)arg3;
- (bool)inspectingLiveProcess;
- (bool)is64bit;
- (id)regionTracker;
- (void)setExcludedFrames:(id)arg1;
- (bool)shouldIgnoreSymbolWithName:(id)arg1 binaryPath:(id)arg2;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(bool)arg2;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (id)symbolicatedBacktraceForFrames:(unsigned long long*)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
- (id)symbolicatedBacktraceForNode:(unsigned int)arg1 nodeDetails:(struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg2 isLiteZone:(bool)arg3 options:(unsigned long long)arg4;
- (id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicator;
- (unsigned int)task;
- (bool)usesCoreFile;
- (bool)usesLiteMode;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end
