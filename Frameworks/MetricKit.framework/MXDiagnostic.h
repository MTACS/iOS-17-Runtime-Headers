
@interface MXDiagnostic : NSObject <NSSecureCoding> {
    NSString * _applicationVersion;
    NSMeasurementFormatter * _measurementFormatter;
    MXMetaData * _metaData;
    int  _pid;
    NSArray * _signpostData;
}

@property (readonly) NSString *applicationVersion;
@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (retain) MXMetaData *metaData;
@property int pid;
@property (retain) NSArray *signpostData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)applicationVersion;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 andPID:(int)arg4;
- (id)measurementFormatter;
- (id)metaData;
- (int)pid;
- (void)setMeasurementFormatter:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setSignpostData:(id)arg1;
- (id)signpostData;
- (id)toDictionary;

@end
