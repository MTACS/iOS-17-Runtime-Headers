
@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding> {
    NSArray * _asrTokens;
    double  _probability;
    NSString * _utterance;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSArray *asrTokens;
@property (nonatomic) double probability;
@property (nonatomic, retain) NSString *utterance;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asrTokens;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtterance:(id)arg1 probability:(double)arg2 asrTokens:(id)arg3 uuid:(id)arg4;
- (id)initWithUtterance:(id)arg1 probability:(double)arg2 uuid:(id)arg3;
- (double)probability;
- (void)setAsrTokens:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)setUtterance:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)utterance;
- (id)uuid;

@end
