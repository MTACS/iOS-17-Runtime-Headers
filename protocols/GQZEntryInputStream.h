
@protocol GQZEntryInputStream <NSObject>

@required

- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long*)arg2;

@end
