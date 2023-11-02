
@interface MusicUI.JSCloudLibraryStatusProvider : NSObject <MusicUI.JSCloudLibraryStatusProviderExports> {
    void _isCloudLibraryEnabled;
    void _isCloudLibraryLoaded;
    void cloudLibraryStatusController;
}

@property (nonatomic, retain) JSValue *isCloudLibraryEnabled;
@property (nonatomic, retain) JSValue *isCloudLibraryLoaded;

- (void).cxx_destruct;
- (id)init;
- (id)isCloudLibraryEnabled;
- (id)isCloudLibraryLoaded;
- (void)setIsCloudLibraryEnabled:(id)arg1;
- (void)setIsCloudLibraryLoaded:(id)arg1;

@end
