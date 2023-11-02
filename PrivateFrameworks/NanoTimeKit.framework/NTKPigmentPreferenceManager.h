
@interface NTKPigmentPreferenceManager : NSObject {
    NSSet * _autoSelectedPigments;
    <NTKPigmentPreferenceManagerDelegate> * _delegate;
    NSString * _domain;
    NPSDomainAccessor * _npsDomainAccessor;
    NSObject<OS_dispatch_queue> * _privateQueue;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    NSSet * _selectedPigments;
    NSUserDefaults * _userDefault;
}

@property (nonatomic, copy) NSSet *autoSelectedPigments;
@property (nonatomic) <NTKPigmentPreferenceManagerDelegate> *delegate;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) NPSDomainAccessor *npsDomainAccessor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic, copy) NSSet *selectedPigments;
@property (nonatomic, retain) NSUserDefaults *userDefault;

+ (bool)_shouldSaveAutoSelectedPigments:(id)arg1 forCollectionName:(id)arg2 userDefault:(id)arg3;

- (void).cxx_destruct;
- (void)_loadAutoSelectedPigments;
- (void)_loadVisibleOptions;
- (void)_threadunsafe_appendAutoSelectPigments:(id)arg1;
- (bool)_threadunsafe_isOptionVisible:(id)arg1;
- (void)_threadunsafe_removeAllAutoSelectPigments;
- (void)_threadunsafe_removeAutoSelectionWithOptionName:(id)arg1;
- (void)_threadunsafe_setOptionName:(id)arg1 visible:(bool)arg2;
- (void)_threadunsafe_setOptionName:(id)arg1 visible:(bool)arg2 manual:(bool)arg3;
- (void)_threadunsafe_syncAllContent;
- (void)_threadunsafe_syncAutoSelectedPigments:(id)arg1;
- (void)_threadunsafe_syncVisibleOptionsByCollection:(id)arg1;
- (id)autoSelectedPigments;
- (void)dealloc;
- (id)delegate;
- (id)domain;
- (void)handlePairedDeviceChanged;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (bool)isOptionVisible:(id)arg1;
- (id)npsDomainAccessor;
- (id)privateQueue;
- (void)resetContent;
- (id)selectedPigments;
- (void)setAutoSelectedPigments:(id)arg1;
- (void)setAutoSelectedPigments:(id)arg1 forCollectionName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setNpsDomainAccessor:(id)arg1;
- (void)setOption:(id)arg1 visible:(bool)arg2;
- (void)setPrivateQueue:(id)arg1;
- (void)setSelectedPigments:(id)arg1;
- (void)setUserDefault:(id)arg1;
- (id)userDefault;

@end
