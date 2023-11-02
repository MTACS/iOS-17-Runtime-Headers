
@interface MSVLyricsElement : MSVLyricsXMLElement {
    MSVLyricsAgent * _agent;
    double  _endTime;
    bool  _isBackgroundVocal;
    NSString * _role;
    double  _startTime;
    long long  _type;
}

@property (nonatomic, retain) MSVLyricsAgent *agent;
@property (nonatomic) double endTime;
@property (nonatomic) bool isBackgroundVocal;
@property (nonatomic, retain) NSString *role;
@property (nonatomic) double startTime;
@property (nonatomic) long long type;

+ (id)_descriptionForElementType:(long long)arg1;

- (void).cxx_destruct;
- (id)agent;
- (id)description;
- (double)endTime;
- (bool)isBackgroundVocal;
- (id)role;
- (void)setAgent:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setIsBackgroundVocal:(bool)arg1;
- (void)setRole:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setType:(long long)arg1;
- (double)startTime;
- (long long)type;

@end
