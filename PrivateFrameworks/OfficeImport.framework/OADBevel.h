
@interface OADBevel : NSObject <NSCopying> {
    float  mHeight;
    int  mType;
    float  mWidth;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (float)height;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setHeight:(float)arg1;
- (void)setType:(int)arg1;
- (void)setWidth:(float)arg1;
- (int)type;
- (float)width;

@end
