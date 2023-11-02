
@interface BLSXPCBacklightProxyObserverMask : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    bool  _observingActivatingWithEvent;
    bool  _observingDeactivatingWithEvent;
    bool  _observingDidChangeAlwaysOnEnabled;
    bool  _observingDidCompleteUpdateToState;
    bool  _observingEventsArray;
    bool  _observingPerformingEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isObserving, nonatomic, readonly) bool observing;
@property (getter=isObservingActivatingWithEvent, nonatomic, readonly) bool observingActivatingWithEvent;
@property (getter=isObservingDeactivatingWithEvent, nonatomic, readonly) bool observingDeactivatingWithEvent;
@property (getter=isObservingDidChangeAlwaysOnEnabled, nonatomic, readonly) bool observingDidChangeAlwaysOnEnabled;
@property (getter=isObservingDidCompleteUpdateToState, nonatomic, readonly) bool observingDidCompleteUpdateToState;
@property (getter=isObservingEventsArray, nonatomic, readonly) bool observingEventsArray;
@property (getter=isObservingPerformingEvent, nonatomic, readonly) bool observingPerformingEvent;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

+ (id)maskForObserver:(id)arg1;
+ (id)maskForObservingDidCompleteUpdateToState:(bool)arg1 observingEventsArray:(bool)arg2 didChangeAlwaysOnEnabled:(bool)arg3 activatingWithEvent:(bool)arg4 deactivatingWithEvent:(bool)arg5 performingEvent:(bool)arg6;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (id)initWithObservingDidCompleteUpdateToState:(bool)arg1 observingEventsArray:(bool)arg2 didChangeAlwaysOnEnabled:(bool)arg3 activatingWithEvent:(bool)arg4 deactivatingWithEvent:(bool)arg5 performingEvent:(bool)arg6;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isObserving;
- (bool)isObservingActivatingWithEvent;
- (bool)isObservingDeactivatingWithEvent;
- (bool)isObservingDidChangeAlwaysOnEnabled;
- (bool)isObservingDidCompleteUpdateToState;
- (bool)isObservingEventsArray;
- (bool)isObservingPerformingEvent;

// Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost

- (id)noActivatingMask;
- (id)noPerformingEventMask;

@end
