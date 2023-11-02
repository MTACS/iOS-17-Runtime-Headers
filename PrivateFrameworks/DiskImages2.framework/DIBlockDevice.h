
@interface DIBlockDevice : DIIOObject

@property (readonly) bool diskImageDevice;
@property (readonly, copy) NSString *mediumType;

+ (id)copyUnmatchedDiskImageWithRegEntryID:(unsigned long long)arg1 error:(id*)arg2;

- (id)copyIOMediaWithError:(id*)arg1;
- (id)copyRootBlockDeviceWithError:(id*)arg1;
- (bool)diskImageDevice;
- (id)mediumType;

@end
