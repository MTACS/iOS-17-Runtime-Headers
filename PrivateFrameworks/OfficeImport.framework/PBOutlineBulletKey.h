
@interface PBOutlineBulletKey : NSObject <NSCopying> {
    unsigned int  mPlaceholderIndex;
    unsigned int  mSlideId;
    int  mTextType;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithOutlineBullet:(id)arg1;
- (id)initWithSlideId:(unsigned int)arg1 textType:(int)arg2 placeholderIndex:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;

@end
