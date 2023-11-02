
@interface PHASEMixerParameterEntry : NSObject {
    PHASEListener * _listener;
    long long  _mixerType;
    PHASESource * _source;
}

@property (nonatomic, retain) PHASEListener *listener;
@property (nonatomic) long long mixerType;
@property (nonatomic, retain) PHASESource *source;

- (void).cxx_destruct;
- (id)init;
- (id)listener;
- (long long)mixerType;
- (void)setListener:(id)arg1;
- (void)setMixerType:(long long)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
