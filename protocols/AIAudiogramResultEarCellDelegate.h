
@protocol AIAudiogramResultEarCellDelegate <NSObject>

@required

- (void)earCellDidBeginEditingForFrequency:(NSNumber *)arg1 forEar:(long long)arg2;
- (void)earCellDidEndEditingForFrequency:(NSNumber *)arg1 forEar:(long long)arg2;
- (void)earCellDidUpdateHearingLevel:(NSNumber *)arg1 forFrequency:(NSNumber *)arg2 forEar:(long long)arg3;

@end
