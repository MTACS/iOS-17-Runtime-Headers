
@interface PGMusicCurationInflationOptions : NSObject {
    long long  _inflationActionSource;
    bool  _shouldForceMetadataRefetch;
}

@property (nonatomic) long long inflationActionSource;
@property (nonatomic, readonly) bool shouldForceMetadataRefetch;

+ (id)stringFromInflationActionSource:(long long)arg1;

- (long long)inflationActionSource;
- (id)initWithInflationActionSource:(long long)arg1;
- (id)initWithRequestOptionsDictionary:(id)arg1 inflationActionSource:(long long)arg2;
- (void)setInflationActionSource:(long long)arg1;
- (bool)shouldForceMetadataRefetch;

@end
