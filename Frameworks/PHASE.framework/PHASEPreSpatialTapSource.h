
@interface PHASEPreSpatialTapSource : NSObject {
    AVAudioFormat * _format;
    NSString * _identifier;
    PHASEEngine * _weakEngine;
}

@property (nonatomic, readonly, copy) AVAudioFormat *format;
@property (nonatomic, readonly) NSString *identifier;

+ (id)new;

- (void).cxx_destruct;
- (void)addMixer:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addSubmixId:(struct UniqueObjectId { unsigned long long x1[2]; })arg1;
- (void)dealloc;
- (id)format;
- (id)identifier;
- (id)init;
- (id)initWithEngine:(id)arg1 description:(id)arg2;
- (id)initWithEngine:(id)arg1 identifier:(id)arg2;
- (id)initWithEngine:(id)arg1 identifier:(id)arg2 binding:(long long)arg3;
- (id)initWithEngine:(id)arg1 identifier:(id)arg2 binding:(long long)arg3 tapType:(long long)arg4;
- (void)removeMixer:(id)arg1;
- (void)removeSource:(id)arg1;
- (void)removeSubmixId:(struct UniqueObjectId { unsigned long long x1[2]; })arg1;

@end
