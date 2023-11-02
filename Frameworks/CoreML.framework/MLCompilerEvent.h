
@interface MLCompilerEvent : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _compilerVersion;
    NSString * _milUpgradeFailureReason;
    NSNumber * _milUpgradeStatus;
    NSString * _modelCompiledWithVersion;
    NSString * _modelHash;
    NSString * _modelName;
    NSNumber * _modelOrigin;
    NSNumber * _modelType;
    NSString * _modelVersion;
}

@property (nonatomic, copy) NSString *compilerVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *milUpgradeFailureReason;
@property (nonatomic, copy) NSNumber *milUpgradeStatus;
@property (nonatomic, copy) NSString *modelCompiledWithVersion;
@property (nonatomic, copy) NSString *modelHash;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSNumber *modelOrigin;
@property (nonatomic, copy) NSNumber *modelType;
@property (nonatomic, copy) NSString *modelVersion;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)compilerVersion;
- (id)dictionaryRepresentation;
- (id)init;
- (id)milUpgradeFailureReason;
- (id)milUpgradeStatus;
- (id)modelCompiledWithVersion;
- (id)modelHash;
- (id)modelName;
- (id)modelOrigin;
- (id)modelType;
- (id)modelVersion;
- (id)name;
- (void)setCompilerVersion:(id)arg1;
- (void)setMilUpgradeFailureReason:(id)arg1;
- (void)setMilUpgradeStatus:(id)arg1;
- (void)setModelCompiledWithVersion:(id)arg1;
- (void)setModelHash:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelOrigin:(id)arg1;
- (void)setModelType:(id)arg1;
- (void)setModelVersion:(id)arg1;

@end
