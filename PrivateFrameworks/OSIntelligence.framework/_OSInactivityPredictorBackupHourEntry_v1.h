
@interface _OSInactivityPredictorBackupHourEntry_v1 : _OSInactivityPredictorBackupHourEntry {
    int  _count;
}

@property (nonatomic) int count;

+ (bool)supportsSecureCoding;

- (int)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCount:(int)arg1;

@end
