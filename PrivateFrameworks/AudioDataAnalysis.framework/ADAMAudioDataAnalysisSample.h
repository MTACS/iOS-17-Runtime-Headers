
@interface ADAMAudioDataAnalysisSample : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * data;
    NSDateInterval * dateInterval;
    NSDictionary * metadata;
    unsigned int  type;
    NSUUID * uuid;
}

@property (nonatomic, readonly) NSNumber *data;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initAudioSampleWithType:(unsigned int)arg1 data:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (unsigned int)type;
- (id)uuid;

@end
