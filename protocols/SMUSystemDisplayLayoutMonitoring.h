
@protocol SMUSystemDisplayLayoutMonitoring <NSObject>

@required

+ (id)externalDisplayLayoutMonitorWithIdentity:(id <SMUSystemDisplayIdentity>)arg1;
+ (id)mainDisplayLayoutMonitor;

- (NSArray *)currentLayout;
- (void)setTransitionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SMUSystemDisplayConfiguration> *, NSArray *, void*
- (id /* block */)transitionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, <SMUSystemDisplayConfiguration> *, NSArray *, void*, id, SEL

@end
