
@interface TSTTableStrokePresetData : NSObject {
    TSDStroke * mExteriorStroke;
    TSDStroke * mHorizontalStroke;
    TSDStroke * mVerticalStroke;
    unsigned int  mVisibleMask;
}

@property (nonatomic, retain) TSDStroke *exteriorStroke;
@property (nonatomic, retain) TSDStroke *horizontalStroke;
@property (nonatomic) unsigned int mask;
@property (nonatomic, retain) TSDStroke *verticalStroke;

- (void)dealloc;
- (id)exteriorStroke;
- (id)horizontalStroke;
- (id)init;
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned int)mask;
- (void)setExteriorStroke:(id)arg1;
- (void)setHorizontalStroke:(id)arg1;
- (void)setMask:(unsigned int)arg1;
- (void)setVerticalStroke:(id)arg1;
- (id)verticalStroke;

@end
