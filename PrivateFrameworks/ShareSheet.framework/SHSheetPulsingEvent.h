
@interface SHSheetPulsingEvent : NSObject <BSXPCSecureCoding> {
    NSUUID * _activityUUID;
    bool  _isPulsing;
    NSString * _localizedTitle;
}

@property (nonatomic, copy) NSUUID *activityUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPulsing;
@property (nonatomic, copy) NSString *localizedTitle;
@property (readonly) Class superclass;

+ (id)startPulsingEventWithActivityUUID:(id)arg1 localizedTitle:(id)arg2;
+ (id)stopPulsingEventWithActivityUUID:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)activityUUID;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isPulsing;
- (id)localizedTitle;
- (void)setActivityUUID:(id)arg1;
- (void)setIsPulsing:(bool)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
