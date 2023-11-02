
@interface MUBlockActivity : UIActivity {
    id /* block */  _block;
    NSString * _systemImageName;
    NSString * _title;
    NSString * _type;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)createBlockActivitiesFromPlaceActionItems:(id)arg1 usingActionManager:(id)arg2 presentationOptions:(id)arg3 analyticsModuleMetadata:(id)arg4;

- (void).cxx_destruct;
- (id)_systemImageName;
- (long long)activityCategory;
- (id)activityTitle;
- (id)activityType;
- (id /* block */)block;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(id /* block */)arg4;
- (void)performActivity;
- (id)systemImageName;
- (id)title;
- (id)type;

@end
