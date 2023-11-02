
@protocol AXPhoenixMitigatorDelegate <NSObject>

@required

- (void)phoenixMitigator:(AXPhoenixMitigator *)arg1 didFailWithError:(NSError *)arg2;
- (void)phoenixMitigator:(AXPhoenixMitigator *)arg1 displayOnDidChange:(bool)arg2;
- (void)phoenixMitigator:(AXPhoenixMitigator *)arg1 touchOnDidChange:(bool)arg2;

@end
