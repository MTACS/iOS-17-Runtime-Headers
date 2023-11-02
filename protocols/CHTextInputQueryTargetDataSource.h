
@protocol CHTextInputQueryTargetDataSource <NSObject>

@required

- (void)fetchContentInfoForTextInputTarget:(void *)arg1 strokeIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CHTextInputTarget *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHTextInputTargetContentInfo *, void*
- (CHTextInputTarget *)textInputTargetForItemStableIdentifier:(NSNumber *)arg1 strokeIdentifiers:(NSSet *)arg2;
- (NSArray *)textInputTargets;

@optional

- (CHTextInputTarget *)textInputTargetForItemStableIdentifier:(NSNumber *)arg1 strokeIdentifiers:(NSSet *)arg2 simultaneousItemStableIdentifiers:(NSArray *)arg3;

@end
