
@interface TSTLayoutProcessChangesActions : NSObject {
    bool  mLayoutInvalidate;
    bool  mLayoutInvalidateProvider;
    bool  mLayoutInvalidateSize;
    bool  mLayoutInvalidateTableNameVisibility;
    bool  mLayoutSpacesInvalidateCoordinates;
    bool  mLayoutSpacesInvalidateTableOffsets;
}

@property (nonatomic) bool layoutInvalidate;
@property (nonatomic) bool layoutInvalidateProvider;
@property (nonatomic) bool layoutInvalidateSize;
@property (nonatomic) bool layoutInvalidateTableNameVisibility;
@property (nonatomic) bool layoutSpacesInvalidateCoordinates;
@property (nonatomic) bool layoutSpacesInvalidateTableOffsets;

- (bool)layoutInvalidate;
- (bool)layoutInvalidateProvider;
- (bool)layoutInvalidateSize;
- (bool)layoutInvalidateTableNameVisibility;
- (bool)layoutSpacesInvalidateCoordinates;
- (bool)layoutSpacesInvalidateTableOffsets;
- (void)setLayoutInvalidate:(bool)arg1;
- (void)setLayoutInvalidateProvider:(bool)arg1;
- (void)setLayoutInvalidateSize:(bool)arg1;
- (void)setLayoutInvalidateTableNameVisibility:(bool)arg1;
- (void)setLayoutSpacesInvalidateCoordinates:(bool)arg1;
- (void)setLayoutSpacesInvalidateTableOffsets:(bool)arg1;

@end
