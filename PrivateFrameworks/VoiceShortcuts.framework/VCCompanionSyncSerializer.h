
@interface VCCompanionSyncSerializer : NSObject <SYChangeSerializer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)changeFromData:(id)arg1 ofType:(long long)arg2;
- (id)dataFromChange:(id)arg1;

@end
