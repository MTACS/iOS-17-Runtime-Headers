
@interface PHASEVolumeCommandForVolumeCategoryMode : PHASEVolumeCommand {
    PHASESessionVolume * _volume;
    NSString * _volumeCategory;
    NSString * _volumeMode;
}

@property (nonatomic, readonly) PHASESessionVolume *volume;
@property (nonatomic, readonly) NSString *volumeCategory;
@property (nonatomic, readonly) NSString *volumeMode;

- (void).cxx_destruct;
- (id)description;
- (id)initInternalWithCategory:(id)arg1 mode:(id)arg2;
- (id)initWithCategory:(id)arg1 mode:(id)arg2;
- (id)initWithCategory:(id)arg1 mode:(id)arg2 volume:(id)arg3;
- (id)volume;
- (id)volumeCategory;
- (id)volumeMode;

@end
