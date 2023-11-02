
@interface AMSUserNotificationSettingsItem : NSObject {
    bool  _enabled;
    NSString * _identifier;
    bool  _userChanged;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *updateDictionary;
@property (nonatomic) bool userChanged;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithIdentifier:(id)arg1 enabled:(bool)arg2;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setUserChanged:(bool)arg1;
- (id)updateDictionary;
- (bool)userChanged;

@end
