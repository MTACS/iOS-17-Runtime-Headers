
@interface _OSInactivityPredictorBackupHourEntry_v2 : _OSInactivityPredictorBackupHourEntry {
    double  _pctLong;
}

@property (nonatomic) double pctLong;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)pctLong;
- (void)setPctLong:(double)arg1;

@end
