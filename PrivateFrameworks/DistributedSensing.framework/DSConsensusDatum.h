
@interface DSConsensusDatum : NSObject {
    unsigned char  _confidence;
    NSString * _identifier;
    NSDate * _time;
}

@property (nonatomic) unsigned char confidence;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *time;

- (void).cxx_destruct;
- (unsigned char)confidence;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 andConfidence:(unsigned char)arg2 atTime:(id)arg3;
- (void)printInfo;
- (void)setConfidence:(unsigned char)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
