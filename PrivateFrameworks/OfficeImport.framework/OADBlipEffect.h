
@interface OADBlipEffect : NSObject <NSCopying> {
    int  mType;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (int)type;

@end
