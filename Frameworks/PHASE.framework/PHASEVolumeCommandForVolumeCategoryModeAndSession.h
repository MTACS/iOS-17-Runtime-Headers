
@interface PHASEVolumeCommandForVolumeCategoryModeAndSession : PHASEVolumeCommandForVolumeCategoryMode {
    unsigned int  _audioSessionToken;
}

@property (nonatomic, readonly) unsigned int audioSessionToken;

- (unsigned int)audioSessionToken;
- (id)description;
- (id)initWithCategory:(id)arg1 mode:(id)arg2 sessionToken:(unsigned int)arg3;

@end
