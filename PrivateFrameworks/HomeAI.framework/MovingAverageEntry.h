
@interface MovingAverageEntry : HMFObject {
    NSDate * _date;
    NSNumber * _value;
}

@property (readonly) NSDate *date;
@property (readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)date;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
