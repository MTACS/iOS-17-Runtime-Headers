
@interface SBAccessoryWindowScene : UIWindowScene {
    SBWindowScene * _associatedWindowScene;
}

@property (nonatomic, retain) SBWindowScene *associatedWindowScene;

- (void).cxx_destruct;
- (id)associatedWindowScene;
- (void)setAssociatedWindowScene:(id)arg1;

@end
