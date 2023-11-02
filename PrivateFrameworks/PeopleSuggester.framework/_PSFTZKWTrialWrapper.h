
@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock * _lock;
    TRIClient * _triClient;
    _PASLock * _updateLock;
}

@property (nonatomic, readonly) TRIClient *triClient;

+ (void)runIfUpdated:(id /* block */)arg1;
+ (void)runWithData:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)flagAsSame;
- (void)flagAsUpdated;
- (id)init;
- (void)loadFactors;
- (bool)loadLevelAsBooleanFromFactor:(id)arg1 withDefault:(bool)arg2;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)arg1 withDefault:(long long)arg2;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)arg1 withDefault:(long long)arg2;
- (void)refresh;
- (void)runIfUpdated:(id /* block */)arg1;
- (void)runWithData:(id /* block */)arg1;
- (id)triClient;

@end
