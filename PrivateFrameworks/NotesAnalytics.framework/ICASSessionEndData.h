
@interface ICASSessionEndData : NSObject <AADataEventType> {
    ICASEndReason * _endReason;
}

@property (nonatomic, readonly) ICASEndReason *endReason;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endReason;
- (id)initWithEndReason:(id)arg1;
- (id)toDict;

@end
