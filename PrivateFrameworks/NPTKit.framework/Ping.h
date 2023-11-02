
@interface Ping : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endTime;
    NSDate * _startTime;
    bool  _wasSuccessful;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSDate *endTime;
@property (readonly) double latency;
@property (nonatomic, retain) NSDate *startTime;
@property bool wasSuccessful;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)latency;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setWasSuccessful:(bool)arg1;
- (id)startTime;
- (bool)wasSuccessful;

@end
