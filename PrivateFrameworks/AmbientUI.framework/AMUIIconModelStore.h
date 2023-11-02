
@interface AMUIIconModelStore : NSObject <SBIconModelStore> {
    <AMUIIconModelStoreDelegate> * _iconModelStoreDelegate;
    PRSPosterConfiguration * _posterConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AMUIIconModelStoreDelegate> *iconModelStoreDelegate;
@property (nonatomic) PRSPosterConfiguration *posterConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)iconModelStoreDelegate;
- (id)loadCurrentIconState:(id*)arg1;
- (id)loadDesiredIconState:(id*)arg1;
- (id)posterConfiguration;
- (bool)saveCurrentIconState:(id)arg1 error:(id*)arg2;
- (bool)saveDesiredIconState:(id)arg1 error:(id*)arg2;
- (void)setIconModelStoreDelegate:(id)arg1;
- (void)setPosterConfiguration:(id)arg1;

@end
