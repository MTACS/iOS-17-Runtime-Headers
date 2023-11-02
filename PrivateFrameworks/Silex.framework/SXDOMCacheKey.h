
@interface SXDOMCacheKey : NSObject <NSCopying> {
    <SXConditionHints> * _hints;
    SXLayoutOptions * _options;
}

@property (nonatomic, readonly) <SXConditionHints> *hints;
@property (nonatomic, readonly) SXLayoutOptions *options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hints;
- (id)initWithLayoutOptions:(id)arg1 hints:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)options;

@end
