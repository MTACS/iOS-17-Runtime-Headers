
@interface OADConnection : NSObject {
    unsigned int  mDrawableId;
    int  mLocationIndex;
}

- (id)description;
- (unsigned int)drawableId;
- (int)locationIndex;
- (void)setDrawableId:(unsigned int)arg1;
- (void)setLocationIndex:(int)arg1;

@end
