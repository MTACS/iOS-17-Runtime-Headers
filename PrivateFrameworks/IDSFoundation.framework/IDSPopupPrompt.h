
@interface IDSPopupPrompt : NSObject {
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 promptMessage:(id)arg2;
- (void)launchPromptWithButton:(id)arg1 defaultUrl:(id)arg2 alternateButton:(id)arg3 alternateUrl:(id)arg4;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
