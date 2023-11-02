
@interface AVTCoreModel : NSObject {
    AVTAvatarEditorColorDefaultsProvider * _colorDefaultsProvider;
    AVTEditingModelColors * _colors;
    NSArray * _groups;
    unsigned long long  _platform;
}

@property (nonatomic, readonly, copy) AVTAvatarEditorColorDefaultsProvider *colorDefaultsProvider;
@property (nonatomic, readonly, copy) AVTEditingModelColors *colors;
@property (nonatomic, readonly, copy) NSArray *groups;
@property (nonatomic, readonly) unsigned long long platform;

- (void).cxx_destruct;
- (id)colorDefaultsProvider;
- (id)colors;
- (id)description;
- (id)groups;
- (id)initWithGroups:(id)arg1 colors:(id)arg2 colorDefaultsProvider:(id)arg3 forPlatform:(unsigned long long)arg4;
- (unsigned long long)platform;

@end
