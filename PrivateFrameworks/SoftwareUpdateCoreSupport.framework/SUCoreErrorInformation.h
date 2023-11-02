
@interface SUCoreErrorInformation : NSObject {
    NSMutableDictionary * _errorInformation;
    NSObject<OS_dispatch_queue> * _informationQueue;
    NSMutableDictionary * _layerInformation;
    NSArray * _safeUserInfoValues;
}

@property (nonatomic, readonly) NSMutableDictionary *errorInformation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *informationQueue;
@property (nonatomic, readonly) NSMutableDictionary *layerInformation;
@property (nonatomic, readonly) NSArray *safeUserInfoValues;

+ (long long)allIndicationsForError:(id)arg1;
+ (void)associateLayer:(long long)arg1 withDomain:(id)arg2;
+ (void)associateLayer:(long long)arg1 withDomain:(id)arg2 indicating:(long long)arg3 ifKeyTrue:(id)arg4;
+ (void)associateLayer:(long long)arg1 withDomain:(id)arg2 keyMatchTrueMap:(id)arg3;
+ (void)associateLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4;
+ (void)associateLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4 indicating:(long long)arg5 ifKeyTrue:(id)arg6 keyMatchTrueMap:(id)arg7;
+ (void)attributesOfErrorForDomain:(id)arg1 withCode:(long long)arg2 codeName:(id)arg3;
+ (void)attributesOfErrorForDomain:(id)arg1 withCode:(long long)arg2 codeName:(id)arg3 indicating:(long long)arg4;
+ (void)attributesOfErrorForDomain:(id)arg1 withCode:(long long)arg2 codeName:(id)arg3 indicating:(long long)arg4 ifKeyTrue:(id)arg5;
+ (void)attributesOfErrorForDomain:(id)arg1 withCode:(long long)arg2 codeName:(id)arg3 indicating:(long long)arg4 ifKeyTrue:(id)arg5 keyMatchTrueMap:(id)arg6;
+ (void)attributesOfErrorForDomain:(id)arg1 withCode:(long long)arg2 codeName:(id)arg3 keyMatchTrueMap:(id)arg4;
+ (void)attributesOfSUCoreErrorCode:(long long)arg1 indicating:(long long)arg2;
+ (id)codeNameForDomain:(id)arg1 withCode:(long long)arg2;
+ (id)codeNameForError:(id)arg1;
+ (long long)indicationsForError:(id)arg1 matchingMask:(long long)arg2;
+ (long long)layerForError:(id)arg1;
+ (id)nameForSUCoreCode:(long long)arg1;
+ (id)nameForSUCoreLayer:(long long)arg1;
+ (id)safeUserInfoValueClasses;
+ (id)setupCoreErrorInformation;
+ (id)sharedErrorInformation;
+ (id)summaryOfIndications:(long long)arg1;

- (void).cxx_destruct;
- (void)_associateLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4;
- (void)_associateLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4 indicating:(long long)arg5 ifKeyTrue:(id)arg6 keyMatchTrueMap:(id)arg7;
- (void)_attributesOfErrorForDomain:(id)arg1 withCode:(long long)arg2 codeName:(id)arg3 indicating:(long long)arg4 ifKeyTrue:(id)arg5 keyMatchTrueMap:(id)arg6;
- (void)_defineErrorLayers;
- (id)errorInformation;
- (id)informationQueue;
- (id)init;
- (id)layerInformation;
- (id)safeUserInfoValues;

@end
