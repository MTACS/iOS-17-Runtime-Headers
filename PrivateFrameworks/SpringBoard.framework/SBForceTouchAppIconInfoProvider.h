
@interface SBForceTouchAppIconInfoProvider : NSObject <SBIconAccessoryInfoProvider>

@property (nonatomic, readonly) SBIconContinuityItem *continuityItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, readonly, copy) NSString *location;
@property (nonatomic, readonly, copy) <NSCopying> *overrideBadgeNumberOrString;
@property (readonly) Class superclass;

- (id)continuityItem;
- (bool)isHighlighted;
- (id)location;
- (id)overrideBadgeNumberOrString;

@end
