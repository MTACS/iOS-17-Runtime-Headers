
@interface _NSClrDatM : NSConcreteMutableData

- (bool)_allowsDirectEncoding;
- (bool)_canReplaceWithDispatchDataForXPCCoder;
- (bool)_canUseRealloc;
- (void)_freeBytes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;

@end
