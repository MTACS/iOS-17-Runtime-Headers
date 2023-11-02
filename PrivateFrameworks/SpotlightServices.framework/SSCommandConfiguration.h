
@interface SSCommandConfiguration : NSObject {
    SFCommand * _command;
    NSString * _symbol;
    NSString * _title;
}

@property (retain) SFCommand *command;
@property (retain) NSString *symbol;
@property (retain) NSString *title;

+ (id)commandButtonItemForAddressLocation:(id)arg1;
+ (id)commandButtonItemForBirthday:(id)arg1;
+ (id)commandButtonItemForEmail:(id)arg1;
+ (id)commandButtonItemForPhoneNumber:(id)arg1 contact:(id)arg2;
+ (id)dialRequestURLWithPhoneNumber:(id)arg1 contact:(id)arg2;
+ (id)punchoutCommandWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryItems:(id)arg4;
+ (id)valueWithPrimaryCommand:(id)arg1 copyString:(id)arg2 copyTitle:(id)arg3 previewCommandConfigurations:(id)arg4;
+ (id)valueWithPrimaryCommand:(id)arg1 copyString:(id)arg2 copyTitle:(id)arg3 previewCommandTitle:(id)arg4;

- (void).cxx_destruct;
- (id)command;
- (id)createSFCommandButtonItem;
- (id)initWithTitle:(id)arg1 symbol:(id)arg2 command:(id)arg3;
- (void)setCommand:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)symbol;
- (id)title;

@end
