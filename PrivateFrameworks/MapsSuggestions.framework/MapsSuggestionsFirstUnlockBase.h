
@interface MapsSuggestionsFirstUnlockBase : MapsSuggestionsBaseTrigger <MapsSuggestionsFirstUnlockProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)hasDeviceBeenUnlocked;
- (id)initWithName:(id)arg1;
- (void)triggerFired:(id)arg1;
- (id)uniqueName;

@end
