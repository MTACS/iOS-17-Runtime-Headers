
@interface PXStoryDurationFormatter : NSObject {
    NSDateComponentsFormatter * _dateComponentsFormatter;
}

@property (nonatomic, readonly) NSDateComponentsFormatter *dateComponentsFormatter;

- (void).cxx_destruct;
- (id)dateComponentsFormatter;
- (id)stringFromTimeInterval:(double)arg1;

@end
