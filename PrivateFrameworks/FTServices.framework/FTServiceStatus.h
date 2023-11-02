
@interface FTServiceStatus : NSObject {
    bool  _blockPost;
    unsigned long long  _supportedServicesFlags;
    int  _supportedServicesToken;
}

@property (nonatomic) bool blockPost;
@property (nonatomic, readonly) bool faceTimeAudioSupported;
@property (nonatomic, readonly) bool faceTimeMultiwaySupported;
@property (nonatomic, readonly) bool iMessageSupported;
@property unsigned long long supportedServicesFlags;
@property (nonatomic) int supportedServicesToken;

+ (id)sharedInstance;

- (void)_addObservers;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_reload;
- (void)_removeObservers;
- (bool)blockPost;
- (void)dealloc;
- (bool)faceTimeAudioSupported;
- (bool)faceTimeMultiwaySupported;
- (bool)iMessageSupported;
- (id)initPrivate;
- (void)setBlockPost:(bool)arg1;
- (void)setSupportedServicesFlags:(unsigned long long)arg1;
- (void)setSupportedServicesToken:(int)arg1;
- (unsigned long long)supportedServicesFlags;
- (int)supportedServicesToken;

@end
