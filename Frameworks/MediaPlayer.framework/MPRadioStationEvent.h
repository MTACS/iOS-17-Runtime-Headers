
@interface MPRadioStationEvent : NSObject <MPMutableRadioStationEvent, NSSecureCoding> {
    NSString * _descriptionText;
    NSDate * _endTime;
    NSDate * _startTime;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionText;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startTime;
- (id)title;

@end
