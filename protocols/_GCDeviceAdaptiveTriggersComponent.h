
@protocol _GCDeviceAdaptiveTriggersComponent <_GCDeviceComponent>

@required

- (id /* block */)deviceAdaptiveTriggersComponentStatusUpdatedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (id /* block */)deviceAdaptiveTriggersServiceConnectedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setAdaptiveTriggersPayload:(GCDeviceAdaptiveTriggersPayload *)arg1 forIndex:(int)arg2;
- (void)setDeviceAdaptiveTriggersComponentStatusUpdatedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setDeviceAdaptiveTriggersServiceConnectedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSArray *)triggerStatuses;

@end
