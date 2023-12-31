
@interface _CPBundleIdentifierString : NSString {
    NSString * _bundleIdentifierOrProcessName;
    NSString * _executablePath;
    bool  _isProcessName;
}

- (id)_initWithExecutablePath:(id)arg1;
- (bool)_isProcessName;
- (void)_loadBundleIdentifierOrProcessName;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;

@end
