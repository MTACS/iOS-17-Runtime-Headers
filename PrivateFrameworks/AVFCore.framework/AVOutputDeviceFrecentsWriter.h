
@interface AVOutputDeviceFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting> {
    NSMutableDictionary * _frecents;
    NSString * _frecentsFilePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfKeysToBeSet;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (id)initWithFrecentsFilePath:(id)arg1;
- (long long)numberOfKeysToBeSet;
- (bool)persistToDiskReturningError:(id*)arg1;
- (void)removeFrecencyInfoForDeviceID:(id)arg1;
- (void)setFrecencyInfo:(id)arg1 forDeviceID:(id)arg2;

@end
