
@interface MUWebContentBlocker : NSObject {
    NSCache * _regularExpressionCache;
}

+ (id)sharedBlocker;

- (void).cxx_destruct;
- (id)_regularExpression;
- (id)patternForBlocking;
- (bool)shouldBlockLoadingOfURL:(id)arg1;

@end
