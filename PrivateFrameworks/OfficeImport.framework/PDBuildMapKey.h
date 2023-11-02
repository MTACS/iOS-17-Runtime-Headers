
@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue * mDrawableValue;
    NSString * mGroupId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)drawable;
- (id)groupId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDrawable:(id)arg1 groupId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setGroupId:(id)arg1;

@end
