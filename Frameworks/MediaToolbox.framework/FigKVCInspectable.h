
@interface FigKVCInspectable : NSObject

- (bool)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)valueForUndefinedKey:(id)arg1;

@end
