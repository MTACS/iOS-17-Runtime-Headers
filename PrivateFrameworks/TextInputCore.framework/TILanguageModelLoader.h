
@interface TILanguageModelLoader : NSObject {
    TILanguageModelAdaptationContext * _adaptationContext;
    NSString * _clientIdentifier;
    <_ICContactFetchingDelegate> * _contactFetchingDelegate;
    NSArray * _customResourcePaths;
    NSString * _dynamicResourcePath;
    int  _inlineCompletionPrecision;
    TIInputMode * _inputMode;
    NSArray * _mobileAssets;
    struct shared_ptr<KB::LanguageModel> { 
        struct LanguageModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
    bool  _multiLingualModeEnabled;
    NSString * _recipientIdentifier;
    NSDictionary * _trialParameters;
    bool  _usesLinguisticContext;
    bool  _validEnglishTransformerMultilingualConfig;
}

@property (nonatomic, retain) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) <_ICContactFetchingDelegate> *contactFetchingDelegate;
@property (nonatomic, readonly) NSArray *customResourcePaths;
@property (nonatomic, readonly) NSString *dynamicResourcePath;
@property (nonatomic) int inlineCompletionPrecision;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, readonly) NSArray *mobileAssets;
@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; } model;
@property (getter=isMultiLingualModeEnabled, nonatomic, readonly) bool multiLingualModeEnabled;
@property (nonatomic, retain) NSString *recipientIdentifier;
@property (nonatomic, readonly) NSArray *staticResourcePaths;
@property (nonatomic, retain) NSDictionary *trialParameters;
@property (nonatomic, readonly) bool usesLinguisticContext;
@property (nonatomic, readonly) bool validEnglishTransformerMultilingualConfig;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)adaptationContext;
- (void)clearDynamicLearningCaches;
- (id)clientIdentifier;
- (id)contactFetchingDelegate;
- (id)customResourcePaths;
- (id)dynamicResourcePath;
- (void)findRecordsMatchingRecipient:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)flushDynamicLearningCaches;
- (bool)hasLanguageModelBundle;
- (id)initWithInputMode:(id)arg1 customResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 mobileAssets:(id)arg4 usesLinguisticContext:(bool)arg5 isMultiLingualModeEnabled:(bool)arg6 validEnglishTransformerMultilingualConfig:(bool)arg7 trialParameters:(id)arg8 inlineCompletionPrecision:(int)arg9;
- (int)inlineCompletionPrecision;
- (id)inputMode;
- (bool)isMultiLingualModeEnabled;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })languageModelForAdaptationContext:(id)arg1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })lightweightLanguageModel;
- (void)lookupRecordForRecipientIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mobileAssets;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })model;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })newLanguageModel;
- (void)performLearningIfNecessaryForClient:(id)arg1 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)recipientIdentifier;
- (void)setAdaptationContext:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setContactFetchingDelegate:(id)arg1;
- (void)setInlineCompletionPrecision:(int)arg1;
- (void)setLanguageModelClientIdentifier:(id)arg1;
- (void)setLanguageModelRecipientIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setTrialParameters:(id)arg1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel {} *x1; struct __shared_weak_count {} *x2; })sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2 completion:(id /* block */)arg3;
- (id)staticResourcePaths;
- (id)trialParameters;
- (void)unwireLanguageModelMemory;
- (bool)usesLinguisticContext;
- (bool)validEnglishTransformerMultilingualConfig;
- (void)wireLanguageModelMemory;

@end
