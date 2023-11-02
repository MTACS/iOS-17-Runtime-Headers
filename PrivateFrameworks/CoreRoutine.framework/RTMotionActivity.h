
@interface RTMotionActivity : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _confidence;
    NSDate * _startDate;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long confidence;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long type;

+ (id)motionActivityConfidenceToString:(unsigned long long)arg1;
+ (id)motionActivityTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 startDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)startDate;
- (unsigned long long)type;

@end
