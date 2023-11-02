
@interface FATException : NSException <NSCoding, NSCopying>

+ (void)initialize;
+ (id)structFields;
+ (id)structName;

- (id)init;
- (void)read:(id)arg1;
- (void)write:(id)arg1;

@end
