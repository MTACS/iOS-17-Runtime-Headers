
@interface _ATXDNDTransition : NSObject <ATXTimedEventProtocol> {
    bool  _isStartOfDND;
    NSTimeZone * _timeZone;
    NSDate * _transitionTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStartOfDND;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSDate *transitionTime;

- (void).cxx_destruct;
- (id)eventTime;
- (id)init;
- (id)initWithTransitionTime:(id)arg1 timeZone:(id)arg2 isStartOfDND:(bool)arg3;
- (bool)isStartOfDND;
- (id)prettyRepresentation;
- (id)timeZone;
- (id)transitionTime;

@end
