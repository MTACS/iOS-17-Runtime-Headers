
@interface _UIFocusRegionContentAttributes : NSObject <NSCopying> {
    _UIFocusRegion * _contentRegion;
    bool  _requiresIntersectionWithFocusMapSearchArea;
}

@property (nonatomic, retain) _UIFocusRegion *contentRegion;
@property (nonatomic) bool requiresIntersectionWithFocusMapSearchArea;

+ (id)attributesForFocusRegionContentInContainer:(id)arg1 coordinateSpace:(id)arg2;

- (void).cxx_destruct;
- (id)contentRegion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)requiresIntersectionWithFocusMapSearchArea;
- (void)setContentRegion:(id)arg1;
- (void)setRequiresIntersectionWithFocusMapSearchArea:(bool)arg1;

@end
