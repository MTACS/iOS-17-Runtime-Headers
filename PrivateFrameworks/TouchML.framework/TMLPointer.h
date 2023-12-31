
@interface TMLPointer : NSObject <TMLPointerJSExports> {
    id /* block */  _readBlock;
    id /* block */  _writeBlock;
}

@property (nonatomic) id pointee;
@property (nonatomic, copy) id /* block */ readBlock;
@property (nonatomic, copy) id /* block */ writeBlock;

+ (id)pointerWithReadBlock:(id /* block */)arg1 writeBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)pointee;
- (id /* block */)readBlock;
- (void)setPointee:(id)arg1;
- (void)setReadBlock:(id /* block */)arg1;
- (void)setWriteBlock:(id /* block */)arg1;
- (id /* block */)writeBlock;

@end
