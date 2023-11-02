
@interface ATXModeAnchorModelSuggestion : NSObject <NSSecureCoding> {
    NSString * _anchorType;
    double  _classConditionalProbability;
    bool  _isStart;
    NSString * _modeUUID;
    unsigned long long  _numUniqueOccurrencesAfterAnchor;
    double  _posteriorProbability;
    double  _score;
    NSArray * _serializedTriggers;
}

@property (nonatomic, readonly) NSString *anchorType;
@property (nonatomic, readonly) double classConditionalProbability;
@property (nonatomic, readonly) bool isStart;
@property (nonatomic, readonly) NSString *modeUUID;
@property (nonatomic, readonly) unsigned long long numUniqueOccurrencesAfterAnchor;
@property (nonatomic, readonly) double posteriorProbability;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSArray *serializedTriggers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorType;
- (double)classConditionalProbability;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModeUUID:(id)arg1 isStart:(bool)arg2 anchorType:(id)arg3 score:(double)arg4 numUniqueOccurrencesAfterAnchor:(unsigned long long)arg5 posteriorProbability:(double)arg6 classConditionalProbability:(double)arg7 serializedTriggers:(id)arg8;
- (bool)isStart;
- (id)modeUUID;
- (unsigned long long)numUniqueOccurrencesAfterAnchor;
- (double)posteriorProbability;
- (double)score;
- (id)serializedTriggers;

@end
