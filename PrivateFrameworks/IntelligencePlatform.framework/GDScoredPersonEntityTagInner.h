
@interface GDScoredPersonEntityTagInner : NSObject {
    void inferenceEventId;
    void score;
    void tag;
}

@property (nonatomic, readonly) long long gdTag;
@property (nonatomic, readonly) long long inferenceEventIdValue;
@property (nonatomic, readonly) double score;

- (long long)gdTag;
- (long long)inferenceEventIdValue;
- (id)init;
- (id)initWithGdTag:(long long)arg1 score:(double)arg2 inferenceEventIdValue:(long long)arg3;
- (double)score;

@end
