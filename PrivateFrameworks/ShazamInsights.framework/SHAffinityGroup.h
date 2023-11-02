
@interface SHAffinityGroup : NSObject {
    long long  _cohesionLevel;
    long long  _groupType;
    NSMutableArray * _mutableMediaItems;
}

@property (nonatomic, readonly) long long cohesionLevel;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly) NSArray *mediaItems;
@property (nonatomic, retain) NSMutableArray *mutableMediaItems;

- (void).cxx_destruct;
- (void)appendMediaItem:(id)arg1;
- (long long)cohesionLevel;
- (long long)groupType;
- (id)init;
- (id)initWithType:(long long)arg1 cohesionLevel:(long long)arg2;
- (id)mediaItems;
- (id)mutableMediaItems;
- (void)setMutableMediaItems:(id)arg1;

@end
