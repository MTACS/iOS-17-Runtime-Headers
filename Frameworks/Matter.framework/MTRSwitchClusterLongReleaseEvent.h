
@interface MTRSwitchClusterLongReleaseEvent : NSObject <NSCopying> {
    NSNumber * _previousPosition;
}

@property (nonatomic, copy) NSNumber *previousPosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)previousPosition;
- (void)setPreviousPosition:(id)arg1;

@end
