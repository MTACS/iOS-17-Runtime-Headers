
@interface BPSTimeWindowState : BPSWindowState <NSSecureCoding> {
    NSDateInterval * _dateInterval;
}

@property (nonatomic, retain) NSDateInterval *dateInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 identifier:(id)arg2 aggregate:(id)arg3 completed:(bool)arg4;
- (id)metadata;
- (void)setDateInterval:(id)arg1;

@end
