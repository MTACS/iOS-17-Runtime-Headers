
@interface WLKDeltaContinuationMetadata : WLKContinuationMetadataBase {
    NSString * _adamID;
    long long  _deltaType;
    NSURL * _playbackURL;
}

@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) long long deltaType;
@property (nonatomic, readonly) NSURL *playbackURL;

+ (long long)_deltaTypeForString:(id)arg1;

- (void).cxx_destruct;
- (id)adamID;
- (long long)deltaType;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)playbackURL;

@end
