
@interface IKSrcsetParser : NSObject {
    NSArray * _srcsetRules;
}

@property (nonatomic, readonly) NSURL *resolvedURL;

- (void).cxx_destruct;
- (id)initWithSrcsetStr:(id)arg1 defaultStr:(id)arg2;
- (id)resolvedURL;

@end
