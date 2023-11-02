
@interface AVCAnsweringMachineConfiguration : NSObject <NSCopying> {
    VCSandboxedURL * _announcementAsset;
    unsigned int  _announcementAssetMilliSecondDelay;
    int  _clientPid;
    bool  _isMessageCaptioningEnabled;
    bool  _isMessagePlaybackEnabled;
    bool  _isMessageRecordingEnabled;
    unsigned char  _source;
}

@property (nonatomic, retain) NSURL *announcementAsset;
@property (nonatomic) unsigned int announcementAssetMilliSecondDelay;
@property (nonatomic) bool isMessageCaptioningEnabled;
@property (nonatomic) bool isMessagePlaybackEnabled;
@property (nonatomic) bool isMessageRecordingEnabled;
@property (nonatomic) unsigned char source;

+ (id)stringFromCallSource:(unsigned char)arg1;

- (id)announcementAsset;
- (unsigned int)announcementAssetMilliSecondDelay;
- (int)clientPid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithClientDictionary:(id)arg1 clientPid:(int)arg2;
- (bool)isMessageCaptioningEnabled;
- (bool)isMessagePlaybackEnabled;
- (bool)isMessageRecordingEnabled;
- (void)setAnnouncementAsset:(id)arg1;
- (void)setAnnouncementAssetMilliSecondDelay:(unsigned int)arg1;
- (void)setIsMessageCaptioningEnabled:(bool)arg1;
- (void)setIsMessagePlaybackEnabled:(bool)arg1;
- (void)setIsMessageRecordingEnabled:(bool)arg1;
- (void)setSource:(unsigned char)arg1;
- (unsigned char)source;

@end
