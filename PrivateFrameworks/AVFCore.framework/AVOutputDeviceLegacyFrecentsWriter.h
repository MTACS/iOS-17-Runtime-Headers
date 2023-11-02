
@interface AVOutputDeviceLegacyFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting> {
    NSMutableArray * _keysToRemove;
    NSMutableDictionary * _updatedFrecentsList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfKeysToBeSet;
@property (readonly) Class superclass;

+ (id)defaultFrecentsWriter;

- (void)dealloc;
- (id)init;
- (long long)numberOfKeysToBeSet;
- (bool)persistToDiskReturningError:(id*)arg1;
- (void)removeFrecencyInfoForDeviceID:(id)arg1;
- (void)setFrecencyInfo:(id)arg1 forDeviceID:(id)arg2;

@end
