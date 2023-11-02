
@interface BLSBacklightChangeEvent : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    BLSBacklightChangeRequest * _changeRequest;
    unsigned long long  _eventID;
    long long  _previousState;
    long long  _state;
}

@property (getter=isAlwaysOnTransition, nonatomic, readonly) bool alwaysOnTransition;
@property (nonatomic, readonly) BLSBacklightChangeRequest *changeRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnvironmentTransitionAnimated, nonatomic, readonly) bool environmentTransitionAnimated;
@property (nonatomic, readonly) unsigned long long eventID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long previousState;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (getter=isTransitionForcedUnanimated, nonatomic, readonly) bool transitionForcedUnanimated;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)changeRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)eventID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventID:(unsigned long long)arg1 state:(long long)arg2 previousState:(long long)arg3 changeRequest:(id)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)previousState;
- (long long)state;

// Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost

- (bool)isAlwaysOnTransition;
- (bool)isEnvironmentTransitionAnimated;
- (bool)isTransitionForcedUnanimated;

@end
