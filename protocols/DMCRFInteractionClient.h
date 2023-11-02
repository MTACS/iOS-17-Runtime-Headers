
@protocol DMCRFInteractionClient <NSObject>

@required

- (void)doesUserWantToRestoreSnapshot:(void *)arg1 withConflictingApps:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <DMCRFSnapshot> *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
