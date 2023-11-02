
@interface PHASESpatialMixer : PHASEMixer {
    struct Handle64 { 
        unsigned long long mData; 
    }  _distanceModel;
    PHASEListener * _listener;
    struct Handle64 { 
        unsigned long long mData; 
    }  _listenerDirectivityModel;
    PHASESource * _source;
    struct Handle64 { 
        unsigned long long mData; 
    }  _sourceDirectivityModel;
    NSArray * _spatialModelerSends;
}

@property (nonatomic) struct Handle64 { unsigned long long x1; } distanceModel;
@property (nonatomic, readonly) PHASEListener *listener;
@property (nonatomic) struct Handle64 { unsigned long long x1; } listenerDirectivityModel;
@property (nonatomic, readonly) PHASESource *source;
@property (nonatomic) struct Handle64 { unsigned long long x1; } sourceDirectivityModel;
@property (nonatomic, readonly) NSArray *spatialModelerSends;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Handle64 { unsigned long long x1; })distanceModel;
- (id)init;
- (id)initWithIdentifier:(id)arg1 spatialModelerSends:(id)arg2 source:(id)arg3 listener:(id)arg4 sourceDirectivityModel:(struct Handle64 { unsigned long long x1; })arg5 listenerDirectivityModel:(struct Handle64 { unsigned long long x1; })arg6 distanceModel:(struct Handle64 { unsigned long long x1; })arg7;
- (id)listener;
- (struct Handle64 { unsigned long long x1; })listenerDirectivityModel;
- (void)setDistanceModel:(struct Handle64 { unsigned long long x1; })arg1;
- (void)setListenerDirectivityModel:(struct Handle64 { unsigned long long x1; })arg1;
- (void)setSourceDirectivityModel:(struct Handle64 { unsigned long long x1; })arg1;
- (id)source;
- (struct Handle64 { unsigned long long x1; })sourceDirectivityModel;
- (id)spatialModelerSends;

@end
