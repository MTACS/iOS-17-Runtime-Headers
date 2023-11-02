
@interface MLTreeEnsembleXGBoostUpdateEngine : MLTreeEnsembleXGBoostClassifier <MLUpdatable> {
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _cachedModel;
    struct vector<long long, std::allocator<long long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::allocator<long long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _classesByInt;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _classesByString;
    bool  _continueWithUpdate;
    struct shared_ptr<Archiver::MMappedFile> { 
        struct MMappedFile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mmappedModel;
    unsigned long long  _numDimensions;
    MLParameterContainer * _parameterContainer;
    bool  _personalization;
    MLUpdateProgressHandlers * _progressHandlers;
    NSObject<OS_dispatch_queue> * _progressHandlersDispatchQueue;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<unsigned char' */ struct  cachedModel; /* unknown property attribute:  std::allocator<unsigned char>>=*}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<long long' */ struct  classesByInt; /* unknown property attribute:  std::allocator<long long>>=^q}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<std::string' */ struct  classesByString; /* unknown property attribute:  std::allocator<std::string>>=^v}} */
@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic) bool continueWithUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic) struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile {} *x1; struct __shared_weak_count {} *x2; } mmappedModel;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic) unsigned long long numDimensions;
@property (nonatomic, retain) MLParameterContainer *parameterContainer;
@property (nonatomic) bool personalization;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, retain) MLUpdateProgressHandlers *progressHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<unsigned char, std::allocator<unsigned char>> { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x_3_1_1; } x3; })cachedModel;
- (void)cancelUpdate;
- (struct vector<long long, std::allocator<long long>> { long long *x1; long long *x2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_1_1; } x3; })classesByInt;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })classesByString;
- (bool)continueWithUpdate;
- (id)initWithCompiledArchive:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)loadParameterDescriptionsAndContainerFromConfiguration:(id)arg1 modelDescription:(id)arg2 error:(id*)arg3;
- (struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile {} *x1; struct __shared_weak_count {} *x2; })mmappedModel;
- (unsigned long long)numDimensions;
- (id)parameterContainer;
- (id)parameterValueForKey:(id)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (bool)personalization;
- (id)progressHandlers;
- (id)progressHandlersDispatchQueue;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)arg1;
- (bool)setBoosterParameters:(void*)arg1 error:(id*)arg2;
- (void)setCachedModel:(struct vector<unsigned char, std::allocator<unsigned char>> { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x_3_1_1; } x3; })arg1;
- (void)setClassesByInt:(struct vector<long long, std::allocator<long long>> { long long *x1; long long *x2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_1_1; } x3; })arg1;
- (void)setClassesByString:(struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })arg1;
- (void)setContinueWithUpdate:(bool)arg1;
- (void)setMmappedModel:(struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setNumDimensions:(unsigned long long)arg1;
- (void)setParameterContainer:(id)arg1;
- (void)setPersonalization:(bool)arg1;
- (void)setProgressHandlers:(id)arg1;
- (void)setProgressHandlersDispatchQueue:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (void)updateModelWithData:(id)arg1;
- (id)updateParameters;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
