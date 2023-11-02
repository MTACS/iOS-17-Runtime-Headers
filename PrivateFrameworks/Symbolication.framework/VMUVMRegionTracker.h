
@interface VMUVMRegionTracker : NSObject <NSSecureCoding> {
    NSMutableArray * _regionInfoArray;
    <VMUStackLogReader> * _stackLogReader;
}

@property (readonly) long long regionCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_regionIndexForAddress:(unsigned long long)arg1;
- (void)convertStackIDs:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)handleStackLogType:(unsigned int)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 stackID:(unsigned long long)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStackLogReader:(id)arg1;
- (long long)regionCount;
- (id)vmRegionRangeInfoForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;

@end
