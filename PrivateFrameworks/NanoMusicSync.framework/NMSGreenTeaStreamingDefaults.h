
@interface NMSGreenTeaStreamingDefaults : NSObject {
    NSUserDefaults * _sharedDefaults;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_boolForKey:(id)arg1;
- (void)_setBool:(bool)arg1 forKey:(id)arg2;
- (bool)greenTeaMusicAllowCellularForHighQualityStreaming;
- (bool)greenTeaMusicAllowCellularForStreaming;
- (bool)greenTeaMusicAllowsDownloadsOverCellular;
- (bool)greenTeaMusicIsMirroringStreamingSettings;
- (id)init;
- (void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(bool)arg1;
- (void)setGreenTeaMusicAllowCellularForStreaming:(bool)arg1;
- (void)setGreenTeaMusicAllowsDownloadsOverCellular:(bool)arg1;
- (void)setGreenTeaMusicIsMirroringStreamingSettings:(bool)arg1;

@end
