
@interface SCUIMoreHelpMenu : UIAlertController <SCUIMoreHelpMenuController> {
    long long  _interventionType;
    <SCUIMoreHelpMenuDelegate> * _menuDelegate;
    long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interventionType;
@property (nonatomic) <SCUIMoreHelpMenuDelegate> *menuDelegate;
@property (nonatomic) long long options;
@property (readonly) Class superclass;

+ (id)menu;
+ (id)menuWithOptions:(long long)arg1;
+ (id)menuWithOptions:(long long)arg1 interventionType:(long long)arg2;

- (void).cxx_destruct;
- (void)addActionsFromModel:(id)arg1;
- (void)didMessageSomeoneDefaultImplementation;
- (long long)interventionType;
- (id)menuDelegate;
- (long long)options;
- (void)setInterventionType:(long long)arg1;
- (void)setMenuDelegate:(id)arg1;
- (void)setOptions:(long long)arg1;

@end
