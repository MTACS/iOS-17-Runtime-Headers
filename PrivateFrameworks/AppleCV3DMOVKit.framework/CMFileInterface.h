
@interface CMFileInterface : NSObject {
    CMDataContainer * _cmDataContainer;
}

+ (void)updateCV3DVersion:(id)arg1 container:(id)arg2;
+ (void)updateCVPlayerVersion:(id)arg1 container:(id)arg2;
+ (void)updateSessionID:(id)arg1 container:(id)arg2;
+ (bool)writeContainerToFileURL:(id)arg1 container:(id)arg2;

- (void).cxx_destruct;
- (id)cv3dVersion;
- (id)cvPlayerVersion;
- (id)deviceString;
- (id)grabNextEvent;
- (id)grabNextRecvData;
- (id)grabNextRecvMessage;
- (id)grabNextSentData;
- (id)grabNextSentMessage;
- (id)iOSVersion;
- (id)initReaderWithFileURL:(id)arg1;
- (id)initWriter;
- (id)macOSVersion;
- (void)processCMData:(id)arg1;
- (void)processCMData:(id)arg1 sending:(bool)arg2;
- (void)resetReader;
- (bool)saveToFileURL:(id)arg1;
- (id)sessionID;
- (void)updateCV3DVersion:(id)arg1;
- (void)updateCVPlayerVersion:(id)arg1;
- (void)updateSessionID:(id)arg1;
- (id)version;

@end
