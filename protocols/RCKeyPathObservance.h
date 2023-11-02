
@protocol RCKeyPathObservance <NSObject>

@required

- (NSArray *)keyPaths;
- (id /* block */)observer:(void *)arg1; // needs 1 arg types, found 8: id /* block */, NSObject *, NSString *, NSDictionary *, bool*, void*, id, SEL
- (void)remove;

@end
