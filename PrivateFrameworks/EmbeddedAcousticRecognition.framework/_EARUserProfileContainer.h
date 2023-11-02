
@interface _EARUserProfileContainer : NSObject {
    struct shared_ptr<std::ifstream> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fstream;
    struct shared_ptr<quasar::LmeData> { 
        struct LmeData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _lmeData;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mutex;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSSet *experimentIds;
@property (nonatomic, copy) NSDate *loadDate;
@property (nonatomic, readonly, copy) NSString *userId;

// Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (id)experimentIds;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1 userId:(id)arg2 recognitionOnly:(bool)arg3 error:(id*)arg4;
- (struct shared_ptr<const quasar::LmeData> { struct LmeData {} *x1; struct __shared_weak_count {} *x2; })lmeData;
- (id)maskedUserIdWithMask:(id)arg1;
- (struct shared_ptr<quasar::LmeContainer> { struct LmeContainer {} *x1; struct __shared_weak_count {} *x2; })quasarContainerWithUserIdMask:(id)arg1;
- (id)userId;

// Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition

- (id)loadDate;
- (void)setLoadDate:(id)arg1;

@end
