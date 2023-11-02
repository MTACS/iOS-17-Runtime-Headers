
@protocol CNGroupIdentityActionItemDelegate <NSObject>

@optional

- (void)groupIdentityActionItem:(void *)arg1 didUpdateActionBlock:(void *)arg2; // needs 2 arg types, found 7: CNGroupIdentityActionItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)groupIdentityActionItem:(CNGroupIdentityActionItem *)arg1 didUpdateOverrideEnabledState:(bool)arg2;

@end
