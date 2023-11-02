
@interface PUEditPluginActionActivity : PUEditPluginActivity {
    NSString * _internalSystemImageName;
}

@property (nonatomic, readonly, copy) NSString *internalSystemImageName;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_systemImageName;
- (id)initWithPlugin:(id)arg1 systemImageName:(id)arg2;
- (id)internalSystemImageName;

@end
