
@interface EDProtection : NSObject <NSCopying> {
    bool  mHidden;
    bool  mLocked;
}

+ (id)protectionWithHidden:(bool)arg1 locked:(bool)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHidden:(bool)arg1 locked:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProtection:(id)arg1;
- (bool)isHidden;
- (bool)isLocked;

@end
