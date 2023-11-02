
@interface MDFixedModeProvider : NSObject <MDModeProviding> {
    unsigned long long  _fixedMode;
}

- (unsigned long long)currentMode;
- (id)initWithFixedMode:(unsigned long long)arg1;

@end
