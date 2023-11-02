
@protocol ATXLocationManagerStateStoreOnDiskEnv

@required

- (void)callOnNextUnlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isLocked;
- (int)openFileAtPath:(NSString *)arg1 dataProtectionClass:(int)arg2;

@end
