
@interface FBKAppListResolver : NSObject <FBKChoiceSetResolverProtocol> {
    bool  _didFetch;
    NSArray * _prefetchedChoices;
}

@property (nonatomic) bool didFetch;
@property (nonatomic, retain) NSArray *prefetchedChoices;

+ (id)displayValueForChoiceValue:(id)arg1;

- (void).cxx_destruct;
- (id)choices;
- (bool)didFetch;
- (id)initWithServerSideChoices:(id)arg1;
- (void)prefetchChoices;
- (id)prefetchedChoices;
- (void)setDidFetch:(bool)arg1;
- (void)setPrefetchedChoices:(id)arg1;

@end
