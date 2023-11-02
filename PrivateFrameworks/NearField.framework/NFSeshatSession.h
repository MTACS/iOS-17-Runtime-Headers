
@interface NFSeshatSession : NFSession <NFSeshatSessionCallbacks>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isTransientError:(struct { unsigned int x1; unsigned int x2; })arg1;
+ (unsigned long long)largeCrumbsFromError:(id)arg1;
+ (unsigned int)smallCrumbsFromError:(id)arg1;

- (struct { unsigned int x1; unsigned int x2; })allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 outToken:(id*)arg4 outWriteCount:(unsigned int*)arg5;
- (struct { unsigned int x1; unsigned int x2; })allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 outToken:(id*)arg4 outWriteCount:(unsigned int*)arg5 trackingError:(id*)arg6;
- (struct { unsigned int x1; unsigned int x2; })authorizeUpdate:(bool)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 outWriteCount:(unsigned int*)arg4;
- (struct { unsigned int x1; unsigned int x2; })authorizeUpdate:(bool)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 outWriteCount:(unsigned int*)arg4 trackingError:(id*)arg5;
- (struct { unsigned int x1; unsigned int x2; })deleteSlot:(unsigned char)arg1 outWriteCount:(unsigned int*)arg2;
- (struct { unsigned int x1; unsigned int x2; })deleteSlot:(unsigned char)arg1 outWriteCount:(unsigned int*)arg2 trackingError:(id*)arg3;
- (struct { unsigned int x1; unsigned int x2; })derive:(unsigned char)arg1 userHash:(id)arg2 outData:(id*)arg3 outWriteCount:(unsigned int*)arg4;
- (struct { unsigned int x1; unsigned int x2; })derive:(unsigned char)arg1 userHash:(id)arg2 outData:(id*)arg3 outWriteCount:(unsigned int*)arg4 trackingError:(id*)arg5;
- (struct { unsigned int x1; unsigned int x2; })getData:(id*)arg1 updateKUD:(char *)arg2 outWriteLimit:(unsigned int*)arg3 outWriteCount:(unsigned int*)arg4;
- (struct { unsigned int x1; unsigned int x2; })getData:(id*)arg1 updateKUD:(char *)arg2 outWriteLimit:(unsigned int*)arg3 outWriteCount:(unsigned int*)arg4 trackingError:(id*)arg5;
- (struct { unsigned int x1; unsigned int x2; })getHash:(id*)arg1;
- (struct { unsigned int x1; unsigned int x2; })getHash:(id*)arg1 trackingError:(id*)arg2;
- (struct { unsigned int x1; unsigned int x2; })obliterate;
- (struct { unsigned int x1; unsigned int x2; })obliterateWithTrackingError:(id*)arg1;
- (struct { unsigned int x1; unsigned int x2; })resetCounter:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(unsigned int*)arg3;
- (struct { unsigned int x1; unsigned int x2; })resetCounter:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(unsigned int*)arg3 trackingError:(id*)arg4;
- (struct { unsigned int x1; unsigned int x2; })upgradeKey:(unsigned char)arg1 inputData:(id)arg2 outWriteCount:(unsigned int*)arg3;
- (struct { unsigned int x1; unsigned int x2; })upgradeKey:(unsigned char)arg1 inputData:(id)arg2 outWriteCount:(unsigned int*)arg3 trackingError:(id*)arg4;

@end
