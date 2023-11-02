
@interface AXDataAnnotation : NSObject {
    NSString * _label;
    AXDataPoint * _location;
    bool  _playsHaptic;
    bool  _speakDuringPlayback;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) AXDataPoint *location;
@property (nonatomic) bool playsHaptic;
@property (nonatomic) bool speakDuringPlayback;

- (void).cxx_destruct;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 label:(id)arg2;
- (id)label;
- (id)location;
- (bool)playsHaptic;
- (void)setLabel:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPlaysHaptic:(bool)arg1;
- (void)setSpeakDuringPlayback:(bool)arg1;
- (bool)speakDuringPlayback;

@end
