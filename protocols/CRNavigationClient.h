
@protocol CRNavigationClient <NSObject>

@required

- (void)navigationOwnershipChangedTo:(unsigned long long)arg1;

@optional

- (void)activeNavigationIdentifiersChangedTo:(NSArray *)arg1;
- (void)didUpdateActiveComponents:(NSArray *)arg1;

@end
