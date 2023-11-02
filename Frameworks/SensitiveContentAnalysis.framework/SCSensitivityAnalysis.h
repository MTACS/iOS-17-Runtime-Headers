
@interface SCSensitivityAnalysis : NSObject {
    bool  _sensitive;
}

@property (getter=isSensitive) bool sensitive;

+ (id)resultsWithSensitive:(bool)arg1;

- (bool)isSensitive;
- (void)setSensitive:(bool)arg1;

@end
