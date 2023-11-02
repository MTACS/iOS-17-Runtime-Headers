
@interface USOSerializedUtteranceAlignment : NSObject <NSSecureCoding> {
    unsigned int  _asrHypothesisIndex;
    unsigned long long  _nodeIndex;
    NSArray * _spans;
}

@property unsigned int asrHypothesisIndex;
@property unsigned long long nodeIndex;
@property (nonatomic, retain) NSArray *spans;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)asrHypothesisIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodeIndex:(unsigned long long)arg1 asrHypothesisIndex:(unsigned int)arg2 spans:(id)arg3;
- (unsigned long long)nodeIndex;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setNodeIndex:(unsigned long long)arg1;
- (void)setSpans:(id)arg1;
- (id)spans;

@end
