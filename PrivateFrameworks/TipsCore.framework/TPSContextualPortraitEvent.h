
@interface TPSContextualPortraitEvent : TPSContextualEvent {
    double  _confidenceThreshold;
    NSString * _topicID;
}

@property (nonatomic) double confidenceThreshold;
@property (nonatomic, copy) NSString *topicID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidenceThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)minObservationCount;
- (void)setConfidenceThreshold:(double)arg1;
- (void)setTopicID:(id)arg1;
- (id)topicID;

@end
