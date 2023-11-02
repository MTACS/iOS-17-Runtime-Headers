
@interface MTRSwitchClusterMultiPressOngoingEvent : NSObject <NSCopying> {
    NSNumber * _currentNumberOfPressesCounted;
    NSNumber * _newPosition;
}

@property (nonatomic, copy) NSNumber *currentNumberOfPressesCounted;
@property (getter=getNewPosition, nonatomic, copy) NSNumber *newPosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentNumberOfPressesCounted;
- (id)description;
- (id)getNewPosition;
- (id)init;
- (void)setCurrentNumberOfPressesCounted:(id)arg1;
- (void)setNewPosition:(id)arg1;

@end
