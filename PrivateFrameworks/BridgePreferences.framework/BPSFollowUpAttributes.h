
@interface BPSFollowUpAttributes : NSObject {
    NSDictionary * _followUpActions;
    NSString * _localizedDescription;
    NSString * _localizedNotificationDescription;
    NSString * _localizedNotificationTitle;
    NSString * _localizedTitle;
    bool  _wantNotification;
}

@property (nonatomic, retain) NSDictionary *followUpActions;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedNotificationDescription;
@property (nonatomic, copy) NSString *localizedNotificationTitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) bool wantNotification;

+ (id)attributeWithOptions:(id)arg1;

- (void).cxx_destruct;
- (id)followUpActions;
- (id)localizedDescription;
- (id)localizedNotificationDescription;
- (id)localizedNotificationTitle;
- (id)localizedTitle;
- (void)setFollowUpActions:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedNotificationDescription:(id)arg1;
- (void)setLocalizedNotificationTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setWantNotification:(bool)arg1;
- (bool)wantNotification;

@end
