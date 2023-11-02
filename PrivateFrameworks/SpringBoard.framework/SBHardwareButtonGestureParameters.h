
@interface SBHardwareButtonGestureParameters : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    double  _longPressTimeInterval;
    long long  _maximumPressCount;
    double  _multiplePressTimeInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double longPressTimeInterval;
@property (nonatomic, readonly) long long maximumPressCount;
@property (nonatomic, readonly) double multiplePressTimeInterval;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)longPressTimeInterval;
- (long long)maximumPressCount;
- (double)multiplePressTimeInterval;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
