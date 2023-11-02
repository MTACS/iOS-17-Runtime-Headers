
@interface SBPressTuple : NSObject <BSDescriptionProviding> {
    double  _durationDown;
    double  _durationUp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double durationDown;
@property (nonatomic) double durationUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)durationDown;
- (double)durationUp;
- (id)initWithDurationDown:(double)arg1 durationUp:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDurationDown:(double)arg1;
- (void)setDurationUp:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
