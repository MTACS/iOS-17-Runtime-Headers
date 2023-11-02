
@interface GEOFeaturesController : NSObject <GEOConfigChangeListenerDelegate> {
    <GEOFeaturesControllerDelegate> * _delegate;
    NSArray * _features;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOFeaturesControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeFeatures;
- (void)dealloc;
- (id)delegate;
- (id)features;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end
