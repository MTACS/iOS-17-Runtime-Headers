
@interface FBKAppQuestionChoice : FBKQuestionChoice <NSSecureCoding> {
    FBKInstalledApp * _app;
}

@property (nonatomic, retain) FBKInstalledApp *app;

+ (id)otherAppChoiceValue;

- (void).cxx_destruct;
- (id)app;
- (void)setApp:(id)arg1;

@end
