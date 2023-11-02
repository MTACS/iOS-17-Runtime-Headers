
@interface HREStandardAsyncRecommendationSource : NSObject <HRERecommendationSource> {
    Class  _generationProcessClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long disablingOptions;
@property (nonatomic, readonly) Class generationProcessClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)disablingOptions;
- (id)dispatchProcess:(id)arg1 options:(unsigned long long)arg2 actionBlock:(id /* block */)arg3;
- (Class)generationProcessClass;
- (id)init;
- (id)recommendationsForHome:(id)arg1 withServiceLikeItems:(id)arg2 accessoryTypeGroup:(id)arg3 options:(unsigned long long)arg4;
- (void)setupProcess:(id)arg1;

@end
