
@interface PLResourceDataStoreOptions : NSObject {
    bool  _assumeNoExistingResources;
}

@property (nonatomic) bool assumeNoExistingResources;

- (bool)assumeNoExistingResources;
- (void)setAssumeNoExistingResources:(bool)arg1;

@end
