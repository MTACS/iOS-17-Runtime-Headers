
@interface AMSFollowUpNotification : NSObject {
    AMSFollowUpAction * _activateAction;
    NSString * _informativeText;
    NSSet * _options;
    NSString * _title;
}

@property (nonatomic, retain) AMSFollowUpAction *activateAction;
@property (nonatomic, retain) NSString *informativeText;
@property (nonatomic, retain) NSSet *options;
@property (nonatomic, retain) NSString *title;

+ (id)defaultOptions;
+ (id)optionForString:(id)arg1;

- (void).cxx_destruct;
- (id)activateAction;
- (id)generateNotification;
- (id)informativeText;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 parentIdentifier:(id)arg2 logKey:(id)arg3;
- (id)options;
- (void)setActivateAction:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
