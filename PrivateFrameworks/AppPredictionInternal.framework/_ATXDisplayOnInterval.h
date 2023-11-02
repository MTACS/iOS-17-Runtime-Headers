
@interface _ATXDisplayOnInterval : NSObject <ATXTimedEventProtocol> {
    NSDateInterval * _onInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateInterval *onInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventTime;
- (id)init;
- (id)initWithOnInterval:(id)arg1;
- (id)onInterval;
- (id)prettyRepresentation;

@end
