
@interface RKMontrealModel : NSObject {
    void * _model;
}

@property (nonatomic, readonly) void*model;

+ (id)modelForLanguage:(id)arg1;
+ (id)pathForLanguage:(id)arg1;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void*)model;
- (void)reset;

@end
