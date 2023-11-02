
@interface MMCSGetFile : MMCSSimpleFile {
    id /* block */  _block;
    id /* block */  _updateBlock;
}

@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ progressUpdateBlock;

- (id /* block */)completionBlock;
- (void)dealloc;
- (id /* block */)progressUpdateBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressUpdateBlock:(id /* block */)arg1;

@end
