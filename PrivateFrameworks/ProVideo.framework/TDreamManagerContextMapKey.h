
@interface TDreamManagerContextMapKey : NSObject <NSCopying> {
    EAGLContext * _ctx;
}

+ (id)currentContextMapKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithCTX:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
