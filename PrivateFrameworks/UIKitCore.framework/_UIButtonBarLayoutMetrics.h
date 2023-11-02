
@interface _UIButtonBarLayoutMetrics : NSObject <NSCopying, _UIButtonBarLayoutMetricsData> {
    bool  _allowsViewWrappers;
    NSLayoutDimension * _flexibleSpaceGuide;
    NSLayoutDimension * _groupSizeGuide;
    bool  _locked;
    NSLayoutDimension * _minimumSpaceGuide;
    NSLayoutDimension * _verticalSizeGuide;
}

@property (nonatomic) bool allowsViewWrappers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutDimension *flexibleSpaceGuide;
@property (nonatomic, retain) NSLayoutDimension *groupSizeGuide;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutDimension *minimumSpaceGuide;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutDimension *verticalSizeGuide;

- (void).cxx_destruct;
- (id)_copyWithModifications:(id /* block */)arg1;
- (id)_upcastIfReadOnly;
- (bool)allowsViewWrappers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)flexibleSpaceGuide;
- (id)groupSizeGuide;
- (id)minimumSpaceGuide;
- (void)setAllowsViewWrappers:(bool)arg1;
- (void)setFlexibleSpaceGuide:(id)arg1;
- (void)setGroupSizeGuide:(id)arg1;
- (void)setMinimumSpaceGuide:(id)arg1;
- (void)setVerticalSizeGuide:(id)arg1;
- (id)verticalSizeGuide;

@end
