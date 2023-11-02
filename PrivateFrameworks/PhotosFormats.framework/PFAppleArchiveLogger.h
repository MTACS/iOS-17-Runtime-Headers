
@interface PFAppleArchiveLogger : PFAppleArchiveStream

+ (bool)encodeFile:(id)arg1 destination:(id)arg2 error:(id*)arg3;

- (bool)encodeBuffer:(const void*)arg1 size:(unsigned long long)arg2 error:(id*)arg3;
- (bool)flush:(id*)arg1;
- (id)initWithArchiveURL:(id)arg1;

@end
