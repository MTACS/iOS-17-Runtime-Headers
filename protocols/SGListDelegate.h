
@protocol SGListDelegate <NSObject>

@required

- (void)list:(SGList *)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)list:(SGList *)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3;

@end
