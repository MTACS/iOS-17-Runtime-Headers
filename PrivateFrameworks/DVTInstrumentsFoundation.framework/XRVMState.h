
@interface XRVMState : NSObject <NSSecureCoding> {
    unsigned long long  _dirtySize;
    unsigned long long  _machAbsolute;
    struct __CFDictionary { } * _pageAnnotationsByRegion;
    NSMutableArray * _regions;
    unsigned long long  _residentSize;
    unsigned long long  _sharedRegionLength;
    unsigned long long  _sharedRegionStart;
    unsigned long long  _swapSize;
    unsigned int  _task;
    unsigned long long  _totalSize;
    unsigned long long  _traceRelative;
}

+ (id)currentStateForTask:(unsigned int)arg1 pid:(int)arg2 previousState:(id)arg3 dehydratedDiffVersion:(bool)arg4;
+ (void)initialize;
+ (id)stateFrom:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addRegion:(id)arg1 annotation:(id)arg2 new:(bool)arg3;
- (void)_annotateRange:(struct _CSRange { unsigned long long x1; unsigned long long x2; })arg1 withPath:(id)arg2 type:(id)arg3;
- (id)_annotationForRegion:(id)arg1;
- (void)_recalculateSizes;
- (void)dealloc;
- (id)description;
- (id)detailsForRegion:(id)arg1;
- (unsigned long long)dirtySize;
- (void)encodeWithCoder:(id)arg1;
- (void)hydrateWithPreviousState:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)machAbsoluteTimestamp;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regions;
- (id)regionsWithOptions:(int)arg1;
- (unsigned long long)residentSize;
- (void)setPageSize:(unsigned long long)arg1;
- (void)setSyntheticMachAbsoluteTimestamp:(unsigned long long)arg1;
- (id)summaryRegionsWithOptions:(int)arg1;
- (unsigned long long)swappedSize;
- (unsigned long long)traceRelativeTimestamp;
- (unsigned long long)virtualSize;

@end
