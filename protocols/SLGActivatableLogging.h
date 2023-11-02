
@protocol SLGActivatableLogging <SLGLogging>

@required

- (id /* block */)activationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SLGActivatableLogging> *, void*, id, SEL
- (id /* block */)deactivationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SLGActivatableLogging> *, void*, id, SEL
- (void)invalidate;
- (bool)isActive;
- (void)setActivationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SLGActivatableLogging> *, void*
- (void)setActive:(bool)arg1;
- (void)setDeactivationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SLGActivatableLogging> *, void*

@end
