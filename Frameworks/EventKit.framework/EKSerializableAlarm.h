
@interface EKSerializableAlarm : EKSerializableObject {
    NSDate * _absoluteDate;
    bool  _isAbsolute;
    bool  _isDefaultAlarm;
    NSNumber * _relativeOffset;
}

@property (nonatomic, copy) NSDate *absoluteDate;
@property (nonatomic) bool isAbsolute;
@property (nonatomic) bool isDefaultAlarm;
@property (nonatomic, retain) NSNumber *relativeOffset;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)absoluteDate;
- (id)createAlarm:(id*)arg1;
- (id)initWithAlarm:(id)arg1;
- (bool)isAbsolute;
- (bool)isDefaultAlarm;
- (id)relativeOffset;
- (void)setAbsoluteDate:(id)arg1;
- (void)setIsAbsolute:(bool)arg1;
- (void)setIsDefaultAlarm:(bool)arg1;
- (void)setRelativeOffset:(id)arg1;

@end
