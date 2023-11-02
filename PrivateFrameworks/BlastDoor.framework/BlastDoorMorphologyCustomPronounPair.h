
@interface BlastDoorMorphologyCustomPronounPair : NSObject {
    void morphologyCustomPronounPair;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long language;
@property (nonatomic, readonly) BlastDoorMorphologyCustomPronoun *pronoun;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (long long)language;
- (id)pronoun;

@end
