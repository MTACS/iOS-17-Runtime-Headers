
@interface PUBadgeInfoPromise : NSObject <NSCopying> {
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
        long long fileSize; 
    }  _badgeInfo;
    id /* block */  _countProvider;
}

@property (nonatomic, readonly) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; } badgeInfo;

- (void).cxx_destruct;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })badgeInfo;
- (id)badgeInfoPromiseWithAdjustedBadges:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1 countProvider:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;

@end
