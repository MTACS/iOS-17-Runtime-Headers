
@interface APOdmlAllowList : APOdmlSingleton {
    NSSet * _allowList;
}

@property (nonatomic, retain) NSSet *allowList;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allowList;
- (unsigned long long)count;
- (id)init;
- (bool)isAllowed:(id)arg1;
- (void)reinitializeAllowList;
- (void)setAllowList:(id)arg1;

@end
