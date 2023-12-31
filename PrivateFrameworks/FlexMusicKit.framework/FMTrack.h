
@interface FMTrack : NSObject {
    NSArray * _clips;
    FMMixParameters * _mixParameters;
}

@property (nonatomic, retain) NSArray *clips;
@property (nonatomic, retain) FMMixParameters *mixParameters;

- (void).cxx_destruct;
- (id)clips;
- (id)description;
- (id)initWithClips:(id)arg1 mixParameters:(id)arg2;
- (id)mixParameters;
- (void)setClips:(id)arg1;
- (void)setMixParameters:(id)arg1;

@end
