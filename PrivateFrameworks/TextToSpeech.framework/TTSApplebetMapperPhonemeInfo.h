
@interface TTSApplebetMapperPhonemeInfo : NSObject {
    NSNumber * _endTime;
    NSString * _phoneme;
    NSNumber * _startTime;
}

@property (nonatomic, retain) NSNumber *endTime;
@property (nonatomic, retain) NSString *phoneme;
@property (nonatomic, retain) NSNumber *startTime;

- (void).cxx_destruct;
- (id)endTime;
- (id)phoneme;
- (void)setEndTime:(id)arg1;
- (void)setPhoneme:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
