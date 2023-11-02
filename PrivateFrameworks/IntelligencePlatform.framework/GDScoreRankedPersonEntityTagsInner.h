
@interface GDScoreRankedPersonEntityTagsInner : NSObject {
    void id;
    void inferenceEventId;
    void scoredPersonEntityTags;
}

@property (nonatomic, readonly) unsigned long long idValue;
@property (nonatomic, readonly) long long inferenceEventIdValue;
@property (nonatomic, readonly) NSArray *scoredPersonEntityTags;

- (void).cxx_destruct;
- (unsigned long long)idValue;
- (long long)inferenceEventIdValue;
- (id)init;
- (id)initWithIdValue:(long long)arg1 scoredPersonEntityTags:(id)arg2 inferenceEventIdValue:(long long)arg3;
- (id)scoredPersonEntityTags;

@end
