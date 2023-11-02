
@interface _NTKSharedJetsamInfo : NSObject {
    NSMapTable * _fetchers;
    NSLock * _fetchersLock;
    int  _pid;
}

+ (id)sharedJetsamInfo;

- (void).cxx_destruct;
- (bool)getInfoFor:(id)arg1 into:(struct jetsam_info { long long x1; long long x2; long long x3; }*)arg2;
- (id)init;
- (bool)resetIntervalFor:(id)arg1;
- (void)unregister:(id)arg1;

@end
