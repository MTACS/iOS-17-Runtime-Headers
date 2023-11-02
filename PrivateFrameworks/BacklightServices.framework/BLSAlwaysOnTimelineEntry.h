
@interface BLSAlwaysOnTimelineEntry : NSObject <NSCopying, NSMutableCopying> {
    bool  _animated;
    double  _duration;
    NSDate * _presentationTime;
    long long  _requestedFidelity;
    <NSObject><NSCopying> * _timelineIdentifier;
    <NSObject> * _userObject;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic) double duration;
@property (nonatomic, readonly) NSDate *presentationTime;
@property (nonatomic) long long requestedFidelity;
@property (nonatomic, retain) <NSObject><NSCopying> *timelineIdentifier;
@property (nonatomic, retain) <NSObject> *userObject;

+ (id)loggingStringForPresentationTime:(id)arg1;
+ (id)shortLoggingStringForPresentationTime:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (double)duration;
- (unsigned long long)hash;
- (id)initWithPresentationTime:(id)arg1 requestedFidelity:(long long)arg2 animated:(bool)arg3 duration:(double)arg4 timelineIdentifier:(id)arg5 userObject:(id)arg6;
- (bool)isAnimated;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)presentationTime;
- (long long)requestedFidelity;
- (void)setAnimated:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setRequestedFidelity:(long long)arg1;
- (void)setTimelineIdentifier:(id)arg1;
- (void)setUserObject:(id)arg1;
- (id)timelineIdentifier;
- (id)userObject;

@end
