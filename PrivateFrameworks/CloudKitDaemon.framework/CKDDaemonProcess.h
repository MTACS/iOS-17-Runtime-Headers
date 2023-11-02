
@interface CKDDaemonProcess : NSObject <C2MultipeerChunkDelegate> {
    bool  _isSystemInstalledBinary;
    C2Multipeer * _multipeer;
    long long  _processType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemInstalledBinary;
@property (nonatomic, retain) C2Multipeer *multipeer;
@property (nonatomic, readonly) long long processType;
@property (readonly) Class superclass;

+ (id)currentProcess;
+ (void)deriveCurrentProcessWithArgC:(int)arg1 argv:(const char **)arg2;

- (void).cxx_destruct;
- (id)_initWithArgC:(int)arg1 argv:(const char **)arg2;
- (id)_initWithProcessType:(long long)arg1;
- (id)chunkDataFromSignature:(id)arg1 forContainerIdentifier:(id)arg2;
- (bool)isSystemInstalledBinary;
- (id)multipeer;
- (long long)processType;
- (void)setMultipeer:(id)arg1;

@end
