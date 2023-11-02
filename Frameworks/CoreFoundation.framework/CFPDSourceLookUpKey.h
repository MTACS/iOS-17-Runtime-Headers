
@interface CFPDSourceLookUpKey : NSObject {
    struct __CFString { } * cloudPath;
    struct __CFString { } * uncanonicalizedPath;
}

- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
