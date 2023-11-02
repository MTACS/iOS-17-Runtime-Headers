
@interface PXSharedLibrarySharingSuggestionBadgeViewConfiguration : NSObject <PXGViewUserData> {
    bool  _isFrozen;
    double  _sideMargin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double sideMargin;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSideMargin:(double)arg1;
- (double)sideMargin;

@end
