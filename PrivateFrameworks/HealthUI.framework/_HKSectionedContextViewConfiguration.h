
@interface _HKSectionedContextViewConfiguration : NSObject <NSCopying> {
    bool  _bottomInsetsEnabled;
    bool  _horizontalInsetsEnabled;
    bool  _isHorizontalInTwoOverlaysMode;
    bool  _topInsetsWithNoHeaderEnabled;
}

@property (nonatomic) bool bottomInsetsEnabled;
@property (nonatomic) bool horizontalInsetsEnabled;
@property (nonatomic) bool isHorizontalInTwoOverlaysMode;
@property (nonatomic) bool topInsetsWithNoHeaderEnabled;

- (bool)bottomInsetsEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)horizontalInsetsEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isHorizontalInTwoOverlaysMode;
- (void)setBottomInsetsEnabled:(bool)arg1;
- (void)setHorizontalInsetsEnabled:(bool)arg1;
- (void)setIsHorizontalInTwoOverlaysMode:(bool)arg1;
- (void)setTopInsetsWithNoHeaderEnabled:(bool)arg1;
- (bool)topInsetsWithNoHeaderEnabled;

@end
