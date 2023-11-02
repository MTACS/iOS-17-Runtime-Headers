
@interface CSDateViewComponent : CSComponent {
    bool  _stretch;
}

@property (nonatomic) bool hidesTime;
@property (nonatomic) NSNumber *pageIndex;
@property (nonatomic) bool stretch;
@property (nonatomic) long long vibrantAndCentered;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hidesTime;
- (id)hidesTime:(bool)arg1;
- (id)init;
- (id)pageIndex;
- (id)pageIndex:(id)arg1;
- (void)setHidesTime:(bool)arg1;
- (void)setPageIndex:(id)arg1;
- (void)setStretch:(bool)arg1;
- (void)setVibrantAndCentered:(long long)arg1;
- (bool)stretch;
- (long long)vibrantAndCentered;
- (id)vibrantAndCentered:(long long)arg1;

@end
