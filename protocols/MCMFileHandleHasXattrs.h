
@protocol MCMFileHandleHasXattrs

@required

- (NSNumber *)copyValueAsNumberFromXattr:(NSString *)arg1 error:(id*)arg2;
- (NSString *)copyValueAsStringFromXattr:(NSString *)arg1 maxLength:(unsigned long long)arg2 error:(id*)arg3;
- (NSUUID *)copyValueAsUUIDFromXattr:(NSString *)arg1 error:(id*)arg2;
- (bool)removeXattr:(NSString *)arg1 error:(id*)arg2;
- (bool)setXattr:(NSString *)arg1 valueAsNumber:(NSNumber *)arg2 error:(id*)arg3;
- (bool)setXattr:(NSString *)arg1 valueAsString:(NSString *)arg2 error:(id*)arg3;
- (bool)setXattr:(NSString *)arg1 valueAsUUID:(NSUUID *)arg2 error:(id*)arg3;

@end
