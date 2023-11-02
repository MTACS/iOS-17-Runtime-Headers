
@interface RSRoomTypePolygon : RS2DPolygon <NSCopying> {
    int  _type;
}

@property (nonatomic, readonly) int type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;

@end
