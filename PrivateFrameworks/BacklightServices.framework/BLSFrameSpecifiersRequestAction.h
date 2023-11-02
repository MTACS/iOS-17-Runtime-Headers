
@interface BLSFrameSpecifiersRequestAction : BSAction

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSDate *previousPresentationDate;
@property (nonatomic, readonly) bool shouldReset;

- (id)dateInterval;
- (id)initWithDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 completion:(id /* block */)arg4;
- (id)previousPresentationDate;
- (bool)shouldReset;

@end
