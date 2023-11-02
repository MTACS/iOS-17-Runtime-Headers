
@interface STBlueprintScheduleSimpleItem : NSObject <NSCopying> {
    NSDateComponents * _endTime;
    NSDateComponents * _startTime;
}

@property (nonatomic, retain) NSDateComponents *endTime;
@property (nonatomic, retain) NSDateComponents *startTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endTime;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
