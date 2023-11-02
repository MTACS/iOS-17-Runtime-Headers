
@protocol _UITraitOverrideDelegate <NSObject>

@required

- (void)_traitOverridesDidChange:(_UITraitOverrides *)arg1;

@optional

- (void)_traitOverridesWillChange:(void *)arg1 withApplicator:(void *)arg2; // needs 2 arg types, found 7: _UITraitOverrides *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UITraitCollection *, id /* block */, UITraitCollection *, void*

@end
