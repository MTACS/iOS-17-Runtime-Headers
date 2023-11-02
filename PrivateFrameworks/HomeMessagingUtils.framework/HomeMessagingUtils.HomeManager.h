
@interface HomeMessagingUtils.HomeManager : NSObject <HMHomeManagerDelegate> {
    void accessorySettingsDataSource;
    void homeDelegate;
    void homesLoaded;
    void homesLoadedHandlers;
    void manager;
    void serialQueue;
}

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;

@end
