
@interface AXTapticSoundTestingContainer : NSObject {
    double  _delay;
    NSString * _sound;
}

@property (nonatomic) double delay;
@property (nonatomic, retain) NSString *sound;

- (void).cxx_destruct;
- (double)delay;
- (id)description;
- (void)setDelay:(double)arg1;
- (void)setSound:(id)arg1;
- (id)sound;

@end
