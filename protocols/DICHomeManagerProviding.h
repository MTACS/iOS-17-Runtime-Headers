
@protocol DICHomeManagerProviding <NSObject>

@required

- (void)addDelegate:(id <DICHomeManagerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSArray *)allHomes;
- (HMAccessory *)currentAccessory;
- (HMHome *)currentHome;
- (bool)homesLoaded;
- (void)loadHomeSynchronous;
- (void)loadHomes:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
