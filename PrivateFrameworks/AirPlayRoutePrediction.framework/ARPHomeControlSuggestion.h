
@interface ARPHomeControlSuggestion : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessoryServiceUUID;
    double  _computedScore;
    NSString * _homeUUID;
    double  _score;
    NSString * _suggestionReason;
    NSString * _targetUUID;
    long long  _type;
}

@property (nonatomic, copy) NSString *accessoryServiceUUID;
@property (nonatomic) double computedScore;
@property (nonatomic, copy) NSString *homeUUID;
@property (nonatomic) double score;
@property (nonatomic, copy) NSString *suggestionReason;
@property (nonatomic, copy) NSString *targetUUID;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryServiceUUID;
- (double)computedScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeUUID:(id)arg1 targetUUID:(id)arg2 accessoryServiceUUID:(id)arg3 type:(long long)arg4 score:(double)arg5 computedScore:(double)arg6 suggestionReason:(id)arg7;
- (id)initWithHomeUUID:(id)arg1 targetUUID:(id)arg2 accessoryServiceUUID:(id)arg3 type:(long long)arg4 score:(double)arg5 suggestionReason:(id)arg6;
- (bool)isEqual:(id)arg1;
- (double)score;
- (void)setAccessoryServiceUUID:(id)arg1;
- (void)setComputedScore:(double)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSuggestionReason:(id)arg1;
- (void)setTargetUUID:(id)arg1;
- (void)setType:(long long)arg1;
- (id)suggestionReason;
- (id)targetUUID;
- (long long)type;

@end
