
@interface CMIndoorOutdoorState : NSObject <NSCopying, NSSecureCoding> {
    long long  fConfidence;
    NSDate * fStartDate;
    long long  fType;
}

@property (nonatomic, readonly) long long confidence;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 type:(long long)arg2 confidence:(long long)arg3;
- (id)startDate;
- (long long)type;

@end
