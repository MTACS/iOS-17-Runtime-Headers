
@interface GDScoredPersonInner : NSObject {
    void id;
    void inferenceEventId;
    void score;
}

@property (nonatomic, readonly) unsigned long long idValue;
@property (nonatomic, readonly) long long inferenceEventIdValue;
@property (nonatomic, readonly) double score;

- (unsigned long long)idValue;
- (long long)inferenceEventIdValue;
- (id)init;
- (id)initWithIdValue:(unsigned long long)arg1 score:(double)arg2 inferenceEventIdValue:(long long)arg3;
- (double)score;

@end
