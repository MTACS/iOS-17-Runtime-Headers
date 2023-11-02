
@interface BSMachPortSendRight : BSMachPortRight <NSCopying>

+ (BOOL)_type;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(bool)arg2;
- (unsigned int)sendRight;

@end
