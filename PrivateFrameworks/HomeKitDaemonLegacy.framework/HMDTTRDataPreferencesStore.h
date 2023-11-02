
@interface HMDTTRDataPreferencesStore : NSObject <HMDTTRDataStoring> {
    NSDate * _lastRadarDialogTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastRadarDialogTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)lastRadarDialogTime;
- (void)setLastRadarDialogTime:(id)arg1;

@end
