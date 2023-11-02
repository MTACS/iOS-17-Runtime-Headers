
@interface IRMiloLslSingleScoreDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _eventID;
    double  _score;
}

@property (nonatomic, readonly) NSString *eventID;
@property (nonatomic, readonly) double score;

+ (id)miloLslSingleScoreDOWithScore:(double)arg1 eventID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementEventID:(id)arg1;
- (id)copyWithReplacementScore:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScore:(double)arg1 eventID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMiloLslSingleScoreDO:(id)arg1;
- (double)score;

@end
