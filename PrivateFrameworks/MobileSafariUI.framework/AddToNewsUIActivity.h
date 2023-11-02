
@interface AddToNewsUIActivity : UIApplicationExtensionActivity {
    TabDocument * _tabDocument;
}

@property (nonatomic, retain) TabDocument *tabDocument;

+ (long long)activityCategory;
+ (id)activityWithTabDocument:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (id)initWithApplicationExtension:(id)arg1 tabDocument:(id)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setTabDocument:(id)arg1;
- (id)tabDocument;

@end
