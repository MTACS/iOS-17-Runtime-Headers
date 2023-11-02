
@interface OADSound : OCDDelayedMedia {
    NSString * mName;
    int  mSizeInBytes;
    NSData * mSoundData;
}

- (void).cxx_destruct;
- (id)description;
- (bool)isLoaded;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSizeInBytes:(int)arg1;
- (void)setSoundData:(id)arg1;
- (int)sizeInBytes;
- (id)soundData;

@end
