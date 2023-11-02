
@protocol UITraitChangeObservable

@required

- (<UITraitChangeRegistration> *)registerForTraitChanges:(NSArray *)arg1 withAction:(SEL)arg2;
- (<UITraitChangeRegistration> *)registerForTraitChanges:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UITraitEnvironment> *, UITraitCollection *, void*
- (<UITraitChangeRegistration> *)registerForTraitChanges:(NSArray *)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)unregisterForTraitChanges:(id <UITraitChangeRegistration>)arg1;

@end
