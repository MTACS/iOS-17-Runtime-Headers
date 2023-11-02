
@interface MTRSwitchClusterLongPressEvent : NSObject <NSCopying> {
    NSNumber * _newPosition;
}

@property (getter=getNewPosition, nonatomic, copy) NSNumber *newPosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)getNewPosition;
- (id)init;
- (void)setNewPosition:(id)arg1;

@end
