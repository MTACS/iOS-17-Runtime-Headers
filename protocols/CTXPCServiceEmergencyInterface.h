
@protocol CTXPCServiceEmergencyInterface

@required

- (void)copyEmergencyMode:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTXPCServiceSubscriptionContext *, CTEmergencyMode *, NSError *, void*
- (void)getAllEmergencyNumbers:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
