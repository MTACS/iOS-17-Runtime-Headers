
@interface DropInCore.HomeManager : NSObject <DICHomeManagerProviding, HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeManagerDelegate> {
    void delegatesToQueues;
    void homesLoaded;
    void homesLoadedHandlers;
    void manager;
    void serialQueue;
}

@property (nonatomic, readonly) NSArray *allHomes;
@property (nonatomic, readonly) HMAccessory *currentAccessory;
@property (nonatomic, readonly) HMHome *currentHome;
@property (nonatomic) bool homesLoaded;

- (void).cxx_destruct;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)allHomes;
- (id)currentAccessory;
- (id)currentHome;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (bool)homesLoaded;
- (id)init;
- (void)loadHomeSynchronous;
- (void)loadHomes:(id /* block */)arg1;
- (void)setHomesLoaded:(bool)arg1;

@end
