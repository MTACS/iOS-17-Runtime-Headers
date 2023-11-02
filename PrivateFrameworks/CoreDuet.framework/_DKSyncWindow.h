
@interface _DKSyncWindow : NSObject <NSCopying> {
    NSDate * _endDate;
    _DKEvent * _event;
    NSDate * _startDate;
}

+ (id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
