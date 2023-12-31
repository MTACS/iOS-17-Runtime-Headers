
@protocol TSPLazyReferenceDelegate <NSObject>

@required

- (TSPObject *)objectForIdentifier:(long long)arg1;

@optional

- (void)lazyReference:(TSPLazyReference *)arg1 didCreateCopy:(TSPLazyReference *)arg2;

@end
