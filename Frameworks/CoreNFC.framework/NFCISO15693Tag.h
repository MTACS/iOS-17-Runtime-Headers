
@interface NFCISO15693Tag : NFCTag <NFCISO15693Tag>

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long icManufacturerCode;
@property (nonatomic, readonly, copy) NSData *icSerialNumber;
@property (nonatomic, readonly, copy) NSData *identifier;
@property (nonatomic, readonly) <NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (id)_generateRequestHeader:(unsigned char)arg1 flags:(unsigned char)arg2;
- (id)_parseResponseErrorWithData:(id)arg1;
- (void)_wtxRetryWithCommnand:(id)arg1 maxRetry:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)challengeWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)customCommandWithRequestFlag:(unsigned char)arg1 customCommandCode:(long long)arg2 customRequestParameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)extendedFastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)extendedGetMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)extendedLockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)extendedWriteMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 dataBlocks:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 dataBlock:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)getSystemInfoAndUIDWithRequestFlag:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (void)getSystemInfoWithRequestFlag:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)icManufacturerCode;
- (id)icSerialNumber;
- (id)identifier;
- (void)keyUpdateWithRequestFlags:(unsigned char)arg1 keyIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)lockAFIWithRequestFlag:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (void)lockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(id /* block */)arg3;
- (void)lockDFSIDWithRequestFlag:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (void)lockDSFIDWithRequestFlag:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (void)readBufferWithRequestFlags:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)readSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(id /* block */)arg3;
- (void)resetToReadyWithRequestFlags:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (void)selectWithRequestFlags:(unsigned char)arg1 completionHandler:(id /* block */)arg2;
- (void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendRequestWithFlag:(long long)arg1 commandCode:(long long)arg2 data:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stayQuietWithCompletionHandler:(id /* block */)arg1;
- (void)writeAFIWithRequestFlag:(unsigned char)arg1 afi:(unsigned char)arg2 completionHandler:(id /* block */)arg3;
- (void)writeDSFIDWithRequestFlag:(unsigned char)arg1 dsfid:(unsigned char)arg2 completionHandler:(id /* block */)arg3;
- (void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 dataBlocks:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 dataBlock:(id)arg3 completionHandler:(id /* block */)arg4;

@end
