
@interface PKEditPendingCacheRequest : NSObject {
    NSString * _cacheKey;
    NSArray * _completionHandlers;
    bool  _fullPass;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    PKPass * _pass;
    long long  _priority;
    bool  _stacked;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSArray *completionHandlers;
@property (nonatomic) bool fullPass;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) PKPass *pass;
@property (nonatomic) long long priority;
@property (nonatomic) bool stacked;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)completionHandlers;
- (bool)fullPass;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isEqual:(id)arg1;
- (id)pass;
- (long long)priority;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setFullPass:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPass:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setStacked:(bool)arg1;
- (bool)stacked;

@end
