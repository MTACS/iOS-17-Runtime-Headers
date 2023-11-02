
@interface NTKJetsamInfoFetcher : NSObject

- (void)dealloc;
- (bool)getInfo:(struct jetsam_info { long long x1; long long x2; long long x3; }*)arg1;
- (bool)resetInterval;

@end
