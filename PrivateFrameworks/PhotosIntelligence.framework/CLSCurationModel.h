
@interface CLSCurationModel : CLSCurationModel_v5 {
    CLSEntityNetModel * _entityNetModel;
    CLSIconicScoreModel * _iconicScoreModel;
    unsigned long long  _similarityModelVersion;
}

@property (readonly) CLSEntityNetModel *entityNetModel;
@property (readonly) CLSIconicScoreModel *iconicScoreModel;
@property (readonly) unsigned long long similarityModelVersion;

+ (id)baseSpecificationWithSpecification:(id)arg1;
+ (id)firstReasonForAvoidForKeyAssetFromStatistics:(const struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { unsigned int x_15_1_1; } x15; struct { unsigned int x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; } x16; }*)arg1;
+ (void)logInfo:(id)arg1 prefix:(id)arg2 avoidForKeyAssetStatistics:(const struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { unsigned int x_15_1_1; } x15; struct { unsigned int x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; } x16; }*)arg3;
+ (void)logInfoInIndividualLine:(id)arg1 prefix:(id)arg2 avoidForKeyAssetStatistics:(const struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { unsigned int x_15_1_1; } x15; struct { unsigned int x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; } x16; }*)arg3;

- (void).cxx_destruct;
- (id)entityNetModel;
- (id)iconicScoreModel;
- (id)initWithCurationModelSpecification:(id)arg1;
- (unsigned long long)similarityModelVersion;

@end
