
@interface UMSideEffects : NSObject <UMSideEffectsProviding> {
    NSObject<UMLibInfoProviding> * _libInfo;
    NSObject<UMLibNotifyProviding> * _libNotify;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<UMLibInfoProviding> *libInfo;
@property (nonatomic, retain) NSObject<UMLibNotifyProviding> *libNotify;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)libInfo;
- (id)libNotify;
- (void)setLibInfo:(id)arg1;
- (void)setLibNotify:(id)arg1;

@end
