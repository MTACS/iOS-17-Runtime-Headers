
@interface IPInstallableProgress : NSObject <NSCopying> {
    IPInstallableProgressData * _data;
    IPInstallableProgressSource * _source;
}

@property (readonly) double overallFractionCompleted;
@property (readonly) unsigned long long phase;
@property (readonly) unsigned long long phaseCompletedUnitCount;
@property (readonly) double phaseFractionCompleted;
@property (readonly) unsigned long long phaseTotalUnitCount;
@property (readonly) IPInstallableProgressSource *source;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSource:(id)arg1 progressSnapshot:(id)arg2;
- (double)overallFractionCompleted;
- (unsigned long long)phase;
- (unsigned long long)phaseCompletedUnitCount;
- (double)phaseFractionCompleted;
- (unsigned long long)phaseTotalUnitCount;
- (id)source;

@end
