
@protocol _CDLocalContextServer <_CDContextServer>

@required

- (void)addObjects:(void *)arg1 andRemoveObjects:(void *)arg2 forArrayAtPath:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSArray *, _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeObjectsMatchingPredicate:(void *)arg1 fromArrayAtPath:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSPredicate *, _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setObject:(void *)arg1 forPath:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSObject<NSCopying><NSSecureCoding> *, _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
