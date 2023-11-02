
@protocol VMUStackLogReader <NSObject>

@required

- (NSString *)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (bool)coldestFrameIsNotThreadId;
- (int)enumerateMSLRecordsAndPayloads:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned long long, unsigned long long, struct { unsigned long long x1; }, void*
- (NSSet *)excludedFrames;
- (NSString *)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (bool)inspectingLiveProcess;
- (bool)is64bit;
- (VMUVMRegionTracker *)regionTracker;
- (void)setExcludedFrames:(NSSet *)arg1;
- (NSString *)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(bool)arg2;
- (NSString *)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (NSString *)sourcePathForPCaddress:(unsigned long long)arg1;
- (NSString *)symbolicatedBacktraceForFrames:(unsigned long long*)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
- (NSString *)symbolicatedBacktraceForNode:(unsigned int)arg1 nodeDetails:(struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg2 isLiteZone:(bool)arg3 options:(unsigned long long)arg4;
- (NSString *)symbolicatedBacktraceForStackID:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicator;
- (unsigned int)task;
- (bool)usesCoreFile;
- (bool)usesLiteMode;
- (VMUVMRegion *)vmuVMRegionForAddress:(unsigned long long)arg1;

@optional

- (void)identifyNonObjectsUsingStackBacktraces:(void *)arg1 classInfoMap:(void *)arg2 classInfoSetterBlock:(void *)arg3; // needs 3 arg types, found 9: <VMUCommonGraphInterface> *, VMUClassInfoMap *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned int, void*
- (struct { unsigned long long x1; })liteMSLPayloadforMallocAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (struct { unsigned long long x1; })liteMSLPayloadforVMregionAddress:(unsigned long long)arg1;
- (unsigned long long)nodesInUniquingTable;
- (unsigned long long)stackIDForNode:(unsigned int)arg1;
- (void)streamFullStackLogsToBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, int, id /* block */, void*, unsigned long long, void*
- (unsigned long long)timestampForNode:(unsigned int)arg1;

@end
