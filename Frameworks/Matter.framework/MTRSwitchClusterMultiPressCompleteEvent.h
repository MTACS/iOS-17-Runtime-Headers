
@interface MTRSwitchClusterMultiPressCompleteEvent : NSObject <NSCopying> {
    NSNumber * _previousPosition;
    NSNumber * _totalNumberOfPressesCounted;
}

@property (getter=getNewPosition, nonatomic, copy) NSNumber *newPosition;
@property (nonatomic, copy) NSNumber *previousPosition;
@property (nonatomic, copy) NSNumber *totalNumberOfPressesCounted;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)getNewPosition;
- (id)init;
- (id)previousPosition;
- (void)setNewPosition:(id)arg1;
- (void)setPreviousPosition:(id)arg1;
- (void)setTotalNumberOfPressesCounted:(id)arg1;
- (id)totalNumberOfPressesCounted;

@end
