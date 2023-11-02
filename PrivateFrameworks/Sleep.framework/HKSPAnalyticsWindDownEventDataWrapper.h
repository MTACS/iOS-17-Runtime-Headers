
@interface HKSPAnalyticsWindDownEventDataWrapper : NSObject <NSCoding, NSSecureCoding> {
    NSArray * _eventDatums;
}

@property (nonatomic, retain) NSArray *eventDatums;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDatums;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDatums:(id)arg1;
- (void)setEventDatums:(id)arg1;

@end
