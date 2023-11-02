
@interface GCLogicalDeviceAnalytics : NSObject {
    NSString * _bundleID;
    <NSObject><NSCopying><NSSecureCoding> * _controllerID;
    NSDate * _curSessionStartTime;
    bool  _eventSent;
    NSDate * _firstSessionStartTime;
    NSString * _productCategory;
    NSMutableArray * _sessionIntervals;
}

@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, readonly, retain) <NSObject><NSCopying><NSSecureCoding> *controllerID;
@property (nonatomic, readonly, retain) NSString *productCategory;
@property (nonatomic, retain) NSMutableArray *sessionIntervals;

- (void).cxx_destruct;
- (id)bundleID;
- (id)controllerID;
- (id)description;
- (void)flushSessionAndSendCAEvent;
- (id)initWithAnonymousIdentifier:(id)arg1 bundleIdentifier:(id)arg2 productCategory:(id)arg3;
- (void)pauseSession;
- (id)productCategory;
- (void)resumeSession;
- (double)sessionActiveDuration;
- (id)sessionIntervals;
- (double)sessionTotalDuration;
- (void)setSessionIntervals:(id)arg1;

@end
