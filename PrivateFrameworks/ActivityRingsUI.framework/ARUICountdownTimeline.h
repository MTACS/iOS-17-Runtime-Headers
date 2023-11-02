
@interface ARUICountdownTimeline : NSObject {
    NSArray * _animations;
    NSArray * _cancelAnimations;
    <ARUICountdownAnimation> * _prepareToAnimate;
    <ARUICountdownAnimation> * _prepareToCancel;
}

@property (nonatomic, retain) NSArray *animations;
@property (nonatomic, retain) NSArray *cancelAnimations;
@property (nonatomic, retain) <ARUICountdownAnimation> *prepareToAnimate;
@property (nonatomic, retain) <ARUICountdownAnimation> *prepareToCancel;

- (void).cxx_destruct;
- (id)animations;
- (id)cancelAnimations;
- (id)prepareToAnimate;
- (id)prepareToCancel;
- (void)setAnimations:(id)arg1;
- (void)setCancelAnimations:(id)arg1;
- (void)setPrepareToAnimate:(id)arg1;
- (void)setPrepareToCancel:(id)arg1;

@end
