
@interface ProsodyTransferData : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _asbd;
    UserVoiceProfile * _userVoiceProfile;
    NSString * _userVoiceProfileUrl;
    NSData * _waveData;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, retain) UserVoiceProfile *userVoiceProfile;
@property (nonatomic, copy) NSString *userVoiceProfileUrl;
@property (nonatomic, copy) NSData *waveData;

- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id)init;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setUserVoiceProfile:(id)arg1;
- (void)setUserVoiceProfileUrl:(id)arg1;
- (void)setWaveData:(id)arg1;
- (id)userVoiceProfile;
- (id)userVoiceProfileUrl;
- (id)waveData;

@end
