
@interface ATSpatialStreamDescriptions : NSObject {
    AVAudioFormat * _flatFormat;
    AVAudioFormat * _streamFormat;
    NSMutableArray * _streamParameters;
    long long  _type;
}

@property (nonatomic, readonly) AVAudioFormat *flatFormat;
@property (nonatomic, readonly) AVAudioFormat *streamFormat;
@property (nonatomic, readonly) NSArray *streamParameters;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)flatFormat;
- (id)init;
- (id)initWithFlatIOFormat:(id)arg1 type:(long long)arg2;
- (id)streamFormat;
- (id)streamParameters;
- (long long)type;

@end
