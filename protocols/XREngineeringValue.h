
@protocol XREngineeringValue <NSObject, NSCopying>

@required

- (unsigned short)engineeringType;
- (NSString *)engineeringTypeMnemonic;
- (void)enumerateUint64Values:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, void*
- (double)fixedDecimal;
- (bool)getLengthOfUint64Representation:(unsigned long long*)arg1;
- (bool)getValue:(id*)arg1 fieldIndex:(unsigned short)arg2;
- (unsigned char)implClass;
- (bool)isValid;
- (id)objectValue;
- (NSString *)string;
- (unsigned int)uint32;
- (unsigned long long)uint64;

@optional

- (void)enumerateKeyValuePairs:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <XREngineeringValue> *, <XREngineeringValue> *, void*
- (void)enumerateTextBacktraceFrames:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, unsigned long long, bool*, void*
- (bool)getPID:(int*)arg1 sessionUUID:(id*)arg2;
- (bool)getTID:(unsigned long long*)arg1 process:(id*)arg2;
- (bool)getURLSessionName:(id*)arg1 internalSessionID:(id*)arg2 backgroundIdentifier:(id*)arg3 isShared:(bool*)arg4 isEphemeral:(bool*)arg5;
- (NSUUID *)uuidFromEngineeringValue;

@end
