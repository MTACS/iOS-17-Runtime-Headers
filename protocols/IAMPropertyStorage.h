
@protocol IAMPropertyStorage <NSObject>

@required

- (void)getPropertyForKey:(void *)arg1 bundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)setProperty:(void *)arg1 forKey:(void *)arg2 bundleIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: id, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
