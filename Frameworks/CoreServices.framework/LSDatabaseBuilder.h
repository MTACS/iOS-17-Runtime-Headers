
@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> * _ioQueue;
}

- (void).cxx_destruct;
- (void)createAndSeedLocalDatabase:(bool*)arg1;
- (id)initWithIOQueue:(id)arg1;
- (void)seedCryptexContentIfNeeded:(bool*)arg1;
- (void)setSeedingComplete:(bool)arg1;
- (void)syncWithMI:(void*)arg1;

@end
