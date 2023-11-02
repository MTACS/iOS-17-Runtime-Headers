
@protocol VMUCommonGraphInterface <NSObject>

@required

- (NSString *)binaryImagesDescription;
- (void*)contentForNode:(unsigned int)arg1;
- (void*)copyUserMarked;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 9: void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; }, bool*, void*
- (unsigned int)enumerateObjectsWithBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; }, bool*, void*
- (unsigned int)enumerateReferencesWithBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned int, unsigned int, struct { struct { /* ? */ } *x1; struct { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; } x2; struct { /* ? */ } *x3; }, bool*, void*
- (unsigned int)enumerateRegionsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VMUVMRegion *, bool*, void*
- (NSString *)executablePath;
- (bool)hasClassInfosDerivedFromStackBacktraces;
- (bool)hasLabelsForNodes;
- (unsigned int)idleExitStatus;
- (bool)is64bit;
- (bool)isTranslatedByRosetta;
- (unsigned int)kernelPageSize;
- (NSString *)labelForNode:(unsigned int)arg1;
- (NSDictionary *)ledger;
- (unsigned long long)ledgerValueForKey:(NSString *)arg1 keyExists:(bool*)arg2;
- (unsigned int)nodeCount;
- (struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })nodeDetails:(unsigned int)arg1;
- (unsigned int)nodeForAddress:(unsigned long long)arg1;
- (unsigned int)nodeNamespaceSize;
- (unsigned long long)physicalFootprint;
- (unsigned long long)physicalFootprintPeak;
- (int)pid;
- (NSString *)processDescriptionString;
- (NSString *)processName;
- (VMUClassInfoMap *)realizedClasses;
- (void)refineTypesWithOverlay:(VMUScanOverlay *)arg1;
- (unsigned int)regionCount;
- (NSString *)shortLabelForNode:(unsigned int)arg1;
- (unsigned int)vmPageSize;
- (VMUVMRegion *)vmuVMRegionForAddress:(unsigned long long)arg1;
- (VMUVMRegion *)vmuVMRegionForNode:(unsigned int)arg1;
- (unsigned int)zoneCount;
- (NSString *)zoneNameForIndex:(unsigned int)arg1;

@end
