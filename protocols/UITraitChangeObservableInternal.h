
@protocol UITraitChangeObservableInternal <UITraitChangeObservable>

@required

- (<UITraitChangeRegistration> *)_registerForTraitTokenChanges:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UITraitEnvironment> *, UITraitCollection *, void*
- (<UITraitChangeRegistration> *)_registerForTraitTokenChanges:(NSArray *)arg1 withTarget:(id)arg2 action:(SEL)arg3;

@end
