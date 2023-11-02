
@interface HFAddAndSetupNewAccessoriesHandler : NSObject {
    bool  _isAccessorySetupActive;
}

@property (nonatomic) bool isAccessorySetupActive;

+ (id)addAndSetupNewAccessoriesForHome:(id)arg1 room:(id)arg2;
+ (id)sharedHandler;

- (id)init;
- (bool)isAccessorySetupActive;
- (void)setIsAccessorySetupActive:(bool)arg1;

@end
