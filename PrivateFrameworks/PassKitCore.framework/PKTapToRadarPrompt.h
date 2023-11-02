
@interface PKTapToRadarPrompt : NSObject <NSSecureCoding> {
    NSDate * _lastPromptDate;
    long long  _promptCount;
    NSString * _reason;
}

@property (nonatomic, copy) NSDate *lastPromptDate;
@property (nonatomic) long long promptCount;
@property (nonatomic, copy) NSString *reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastPromptDate;
- (long long)promptCount;
- (id)reason;
- (void)setLastPromptDate:(id)arg1;
- (void)setPromptCount:(long long)arg1;
- (void)setReason:(id)arg1;

@end
