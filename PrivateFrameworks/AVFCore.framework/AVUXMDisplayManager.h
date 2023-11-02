
@interface AVUXMDisplayManager : NSObject {
    AVDisplayCriteria * _preferredDisplayCriteria;
}

@property (nonatomic, copy) AVDisplayCriteria *preferredDisplayCriteria;

+ (id)sharedAVKitUXMDisplayManager;

- (void)_updateUXMWithDisplayCriteria:(id)arg1;
- (void)_updateUXMWithDisplayCriteriaWithLock:(id)arg1;
- (id)currentUXMDisplayCriteria;
- (void)dealloc;
- (id)init;
- (id)initInternal;
- (id)preferredDisplayCriteria;
- (void)reset;
- (void)setPreferredDisplayCriteria:(id)arg1;

@end
