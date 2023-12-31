
@interface _NSSharedValueTransformer : NSValueTransformer

- (bool)_isBooleanTransformer;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;

@end
