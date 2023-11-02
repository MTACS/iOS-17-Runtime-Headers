
@protocol HSCMBaseObjectInterface <NSObject>

@required

- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2 error:(id*)arg3;
- (id)valueForProperty:(struct __CFString { }*)arg1 error:(id*)arg2;

@optional

- (bool)invalidate:(id*)arg1;

@end
