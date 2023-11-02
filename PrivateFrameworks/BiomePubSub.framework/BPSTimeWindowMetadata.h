
@interface BPSTimeWindowMetadata : NSObject <BPSWindowMetadata> {
    NSDateInterval * _dateInterval;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;

+ (id)new;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)init;
- (id)initWithDateInterval:(id)arg1;

@end
