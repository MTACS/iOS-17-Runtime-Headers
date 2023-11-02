
@interface HUMediaServiceItem : HFItem <NSCopying> {
    HMHome * _home;
    MediaService * _mediaService;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) MediaService *mediaService;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithMediaService:(id)arg1 home:(id)arg2;
- (id)mediaService;
- (void)setMediaService:(id)arg1;

@end
