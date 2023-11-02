
@interface CLTripSegmentProcessorOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _runInertialIntegrator;
    bool  _runLinearInterpolator;
    bool  _runMapIntegrator;
    bool  _shouldRecordDataInFileForReplay;
    bool  _useXPCServiceForMapQuery;
}

@property (nonatomic, readonly) bool runInertialIntegrator;
@property (nonatomic, readonly) bool runLinearInterpolator;
@property (nonatomic, readonly) bool runMapIntegrator;
@property (nonatomic, readonly) bool shouldRecordDataInFileForReplay;
@property (nonatomic, readonly) bool useXPCServiceForMapQuery;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)runInertialIntegrator;
- (bool)runLinearInterpolator;
- (bool)runMapIntegrator;
- (void)setRunInertialIntegrator:(bool)arg1;
- (void)setRunLinearInterpolator:(bool)arg1;
- (void)setRunMapIntegrator:(bool)arg1;
- (void)setUseXPCService:(bool)arg1;
- (void)setshouldRecordDataInFileForReplay:(bool)arg1;
- (bool)shouldRecordDataInFileForReplay;
- (bool)useXPCServiceForMapQuery;

@end
