
@interface ATXModeSetupPredictionModel : NSObject {
    unsigned long long  _mode;
}

- (id)featuresToModel;
- (id)initWithMode:(unsigned long long)arg1;
- (id)modeSetupPredictionModel;
- (id)modelName;
- (double)probabilityScore;

@end
