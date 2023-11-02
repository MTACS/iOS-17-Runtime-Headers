
@interface MICandidateAppContainer : MICandidateContainer {
    NSURL * _appURL;
}

@property (nonatomic, retain) NSURL *appURL;
@property (nonatomic, readonly) bool isPlaceholder;

- (void).cxx_destruct;
- (id)appURL;
- (bool)isPlaceholder;
- (void)setAppURL:(id)arg1;

@end
