
@interface AMSNotificationSettingsItem : NSObject {
    NSString * _desc;
    bool  _enabled;
    NSString * _identifier;
    NSString * _title;
    bool  _userChanged;
}

@property (nonatomic, readonly) NSString *desc;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) bool userChanged;

- (void).cxx_destruct;
- (id)desc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 identifier:(id)arg3 enabled:(bool)arg4;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setUserChanged:(bool)arg1;
- (id)title;
- (bool)userChanged;

@end
