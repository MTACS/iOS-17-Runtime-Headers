
@interface AVTPresentationConfiguration : NSObject {
    unsigned long long  _style;
}

- (id)_initWithStyle:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)internalStyle;
- (bool)usesAR;

@end
