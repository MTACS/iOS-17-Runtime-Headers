
@interface MTRControllerFactoryParams : MTRDeviceControllerFactoryParams

@property (nonatomic, copy) NSArray *cdCerts;
@property (nonatomic, copy) NSArray *paaCerts;
@property (nonatomic) bool startServer;
@property (nonatomic, readonly) <MTRPersistentStorageDelegate> *storageDelegate;

- (id)cdCerts;
- (id)paaCerts;
- (void)setCdCerts:(id)arg1;
- (void)setPaaCerts:(id)arg1;
- (void)setStartServer:(bool)arg1;
- (bool)startServer;
- (id)storageDelegate;

@end
