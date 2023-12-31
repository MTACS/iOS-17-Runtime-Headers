
@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect> {
    id /* block */  _progressBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithProgressBlock:(id /* block */)arg1;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;

@end
