
@interface NTKFaceViewClassPrewarmCache : NSObject {
    NSMutableDictionary * _prewarmCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)prewarmClasses:(id)arg1;
- (id)prewarmDataForClass:(Class)arg1;

@end
