
@interface GCGenericDeviceElementModelBuilder : NSObject {
    long long  _calibrationMax;
    long long  _calibrationMin;
    NSString * _identifier;
    NSPredicate * _predicate;
    int  _typeOverride;
}

@property (nonatomic) long long calibrationMax;
@property (nonatomic) long long calibrationMin;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic) int typeOverride;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (long long)calibrationMax;
- (long long)calibrationMin;
- (id)identifier;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (id)predicate;
- (void)reset;
- (void)setCalibrationMax:(long long)arg1;
- (void)setCalibrationMin:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setTypeOverride:(int)arg1;
- (int)typeOverride;

@end
