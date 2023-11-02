
@protocol MCMFileHandleHasOwnership

@required

- (bool)setPermissions:(unsigned short)arg1 andOwner:(MCMPOSIXUser *)arg2 error:(id*)arg3;

@end
