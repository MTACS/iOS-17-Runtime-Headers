
@interface AIAudiogramMap : NSObject {
    AIAudiogramAxis * _frequencies;
    AIAudiogramAxis * _hearingLevels;
}

@property (nonatomic, retain) AIAudiogramAxis *frequencies;
@property (nonatomic, retain) AIAudiogramAxis *hearingLevels;

- (void).cxx_destruct;
- (id)_valueOfPoint:(struct CGPoint { double x1; double x2; })arg1 betweenObject:(id)arg2 andObject:(id)arg3 onAxis:(unsigned long long)arg4;
- (id)description;
- (id)frequencies;
- (id)frequencyAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hearingLevelAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hearingLevels;
- (id)initWithFrequencies:(id)arg1 hearingLevels:(id)arg2;
- (void)setFrequencies:(id)arg1;
- (void)setHearingLevels:(id)arg1;

@end
