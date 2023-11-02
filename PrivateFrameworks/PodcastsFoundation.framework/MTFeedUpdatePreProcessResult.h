
@interface MTFeedUpdatePreProcessResult : NSObject {
    NSString * _createdPodcastUUID;
    bool  _shouldContinue;
}

@property (nonatomic, readonly) NSString *createdPodcastUUID;
@property (nonatomic, readonly) bool shouldContinue;

+ (id)shouldNotContinueResult;

- (void).cxx_destruct;
- (id)createdPodcastUUID;
- (id)initWithShouldContinue:(bool)arg1 createdPodcastUUID:(id)arg2;
- (bool)shouldContinue;

@end
