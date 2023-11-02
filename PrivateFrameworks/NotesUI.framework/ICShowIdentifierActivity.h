
@interface ICShowIdentifierActivity : UIActivity {
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *identifier;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
