
@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject {
    NSUUID * _accessoryUUID;
    id /* block */  _progressHandler;
}

@property (nonatomic, retain) NSUUID *accessoryUUID;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)initWithAccessoryUUID:(id)arg1 progressHandler:(id /* block */)arg2;
- (id /* block */)progressHandler;
- (void)setAccessoryUUID:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
