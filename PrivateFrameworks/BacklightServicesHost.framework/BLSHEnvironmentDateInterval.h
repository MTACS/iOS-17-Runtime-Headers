
@interface BLSHEnvironmentDateInterval : NSObject {
    <BLSHBacklightSceneHostEnvironment> * _environment;
    NSDateInterval * _presentationInterval;
    NSDate * _previousPresentationDate;
    bool  _shouldReset;
}

@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;
@property (nonatomic, readonly) NSDateInterval *presentationInterval;
@property (nonatomic, readonly) NSDate *previousPresentationDate;
@property (nonatomic, readonly) bool shouldReset;

+ (id)intervalWithPresentationInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 environment:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)environment;
- (unsigned long long)hash;
- (id)initWithPresentationInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 environment:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)presentationInterval;
- (id)previousPresentationDate;
- (bool)shouldReset;

@end
