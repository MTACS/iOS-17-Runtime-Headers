
@interface MAIDiagnosticLogger : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct shared_ptr<std::ofstream> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _inputFile;
    struct shared_ptr<nlohmann::basic_json<>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _inputJson;
    int  _notifyToken;
    struct shared_ptr<std::ofstream> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _outputFile;
    struct shared_ptr<nlohmann::basic_json<>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _outputJson;
}

@property (nonatomic, readonly) NSString *baseFileName;
@property (nonatomic) struct shared_ptr<std::ofstream> { void *x1; struct __shared_weak_count {} *x2; } inputFile;
@property (nonatomic) struct shared_ptr<nlohmann::basic_json<>> { void *x1; struct __shared_weak_count {} *x2; } inputJson;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{basic_string<char' */ struct  jsonObjectName; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}} */
@property (nonatomic, readonly) NSString *notificationName;
@property (nonatomic) bool notifyState;
@property (nonatomic) int notifyToken;
@property (nonatomic) struct shared_ptr<std::ofstream> { void *x1; struct __shared_weak_count {} *x2; } outputFile;
@property (nonatomic) struct shared_ptr<nlohmann::basic_json<>> { void *x1; struct __shared_weak_count {} *x2; } outputJson;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendDay:(id)arg1;
- (id)baseFileName;
- (void)beginPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (void)dealloc;
- (void)endPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)init;
- (struct shared_ptr<std::ofstream> { void *x1; struct __shared_weak_count {} *x2; })inputFile;
- (struct shared_ptr<nlohmann::basic_json<>> { void *x1; struct __shared_weak_count {} *x2; })inputJson;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })jsonObjectName;
- (id)notificationName;
- (bool)notifyState;
- (int)notifyToken;
- (struct shared_ptr<std::ofstream> { void *x1; struct __shared_weak_count {} *x2; })outputFile;
- (struct shared_ptr<nlohmann::basic_json<>> { void *x1; struct __shared_weak_count {} *x2; })outputJson;
- (void)removeOldFiles;
- (void)setInputFile:(struct shared_ptr<std::ofstream> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setInputJson:(struct shared_ptr<nlohmann::basic_json<>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setNotifyState:(bool)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setOutputFile:(struct shared_ptr<std::ofstream> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setOutputJson:(struct shared_ptr<nlohmann::basic_json<>> { void *x1; struct __shared_weak_count {} *x2; })arg1;

@end
