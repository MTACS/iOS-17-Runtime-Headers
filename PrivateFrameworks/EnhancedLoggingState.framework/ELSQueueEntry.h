
@interface ELSQueueEntry : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    double  _executeAfterDuration;
    NSDictionary * _parameters;
    NSString * _platform;
    bool  _retry;
    NSString * _type;
    NSString * _typeName;
}

@property (nonatomic) double executeAfterDuration;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) NSString *platform;
@property (nonatomic) bool retry;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *typeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)executeAfterDuration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 typeName:(id)arg2 parameters:(id)arg3 executeAfterDuration:(double)arg4 retry:(bool)arg5 platform:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (id)platform;
- (bool)retry;
- (void)setExecuteAfterDuration:(double)arg1;
- (void)setParameters:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setRetry:(bool)arg1;
- (void)setType:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)type;
- (id)typeName;

@end
