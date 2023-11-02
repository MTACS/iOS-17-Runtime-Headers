
@interface LiveFSUSBLocalStorageClient : LiveFSClient

+ (id)newManager;

- (id)addDisk:(id)arg1;
- (id)getConnectionForVolume:(id)arg1 withError:(id*)arg2;
- (id)getVolumeName:(id)arg1 withError:(id*)arg2;
- (void)loadVolume:(id)arg1 ofType:(id)arg2 withReply:(id /* block */)arg3;
- (id)loadVolumes:(id)arg1 ofType:(id)arg2 withError:(id*)arg3;
- (id)removeAllVirtualDisks;

@end
