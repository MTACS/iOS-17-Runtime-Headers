
@protocol PXDebugHierarchyProvider

@required

- (NSArray *)debugHierarchyIdentifiers;
- (void)enumerateDebugHierarchyWithIdentifier:(void *)arg1 options:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXDebugHierarchyElement> *, bool*, void*

@end
