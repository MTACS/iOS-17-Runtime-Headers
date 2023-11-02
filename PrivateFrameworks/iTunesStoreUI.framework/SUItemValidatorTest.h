
@interface SUItemValidatorTest : NSObject <NSCopying>

+ (id)defaultTest;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)validateItem:(id)arg1 offer:(id)arg2 error:(id*)arg3;
- (bool)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3;

@end
