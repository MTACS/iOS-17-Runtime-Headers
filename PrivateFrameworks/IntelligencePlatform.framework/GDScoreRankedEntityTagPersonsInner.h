
@interface GDScoreRankedEntityTagPersonsInner : NSObject {
    void inferenceEventId;
    void scoredEntities;
    void tag;
}

@property (nonatomic, readonly) long long gdTag;
@property (nonatomic, readonly) long long inferenceEventIdValue;
@property (nonatomic, readonly) NSArray *scoredEntities;

- (void).cxx_destruct;
- (long long)gdTag;
- (long long)inferenceEventIdValue;
- (id)init;
- (id)initWithGdTag:(long long)arg1 scoredEntities:(id)arg2 inferenceEventIdValue:(long long)arg3;
- (id)scoredEntities;

@end
