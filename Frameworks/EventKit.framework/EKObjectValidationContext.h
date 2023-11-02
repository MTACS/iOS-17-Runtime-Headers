
@interface EKObjectValidationContext : NSObject {
    unsigned long long  _depth;
    bool  _reachedMaxDepth;
    EKObject * _rootObject;
}

@property (nonatomic) unsigned long long depth;
@property (nonatomic) bool reachedMaxDepth;
@property (nonatomic, readonly) EKObject *rootObject;

- (void).cxx_destruct;
- (unsigned long long)depth;
- (void)faultIfNeededForObject:(id)arg1;
- (id)initWithRootObject:(id)arg1;
- (bool)reachedMaxDepth;
- (id)rootObject;
- (void)setDepth:(unsigned long long)arg1;
- (void)setReachedMaxDepth:(bool)arg1;

@end
