
@interface ATSpatialStreamParameters : NSObject {
    AVAudioFormat * _format;
    NSUUID * _identifier;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) NSUUID *identifier;

- (void).cxx_destruct;
- (id)description;
- (void)disableStream;
- (bool)enableStreamWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)format;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initInternalWithFormat:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;

@end
