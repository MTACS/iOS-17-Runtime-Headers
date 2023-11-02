
@interface AVMusicUserEvent : AVMusicEvent {
    NSMutableData * _userData;
}

@property (readonly) unsigned int sizeInBytes;
@property (readonly) struct MusicEventUserData { unsigned int x1; unsigned char x2[1]; }*userData;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithUserData:(struct MusicEventUserData { unsigned int x1; unsigned char x2[1]; }*)arg1;
- (unsigned int)sizeInBytes;
- (struct MusicEventUserData { unsigned int x1; unsigned char x2[1]; }*)userData;

@end
