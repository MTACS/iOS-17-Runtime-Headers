
@interface _UIImageViewPendingSymbolContentTransition : NSObject {
    id /* block */  _completionHandler;
    NSSymbolEffectOptions * _options;
    UIImage * _sourceSymbolImage;
    NSSymbolContentTransition * _symbolContentTransition;
    UIImage * _targetSymbolImage;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) NSSymbolEffectOptions *options;
@property (nonatomic, readonly) UIImage *sourceSymbolImage;
@property (nonatomic, readonly) NSSymbolContentTransition *symbolContentTransition;
@property (nonatomic, readonly) UIImage *targetSymbolImage;

+ (id)transitionWithTransition:(id)arg1 sourceSymbolImage:(id)arg2 targetSymbolImage:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)options;
- (id)sourceSymbolImage;
- (id)symbolContentTransition;
- (id)targetSymbolImage;

@end
