
@protocol DNDRemoteServiceServerSettingsProtocol <NSObject>

@required

- (void)getBehaviorSettingsWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDBehaviorSettings *, NSError *, void*
- (void)getScheduleSettingsWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDScheduleSettings *, NSError *, void*
- (void)setBehaviorSettings:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDBehaviorSettings *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)setScheduleSettings:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDScheduleSettings *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
