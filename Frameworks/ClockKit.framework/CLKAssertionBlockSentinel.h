
@interface CLKAssertionBlockSentinel : NSObject {
    bool  _called;
    id /* block */  _fallbackBlock;
    bool  _fatal;
    NSString * _message;
}

@property (getter=isCalled) bool called;
@property (nonatomic, copy) id /* block */ fallbackBlock;
@property (getter=shouldBeFatal, nonatomic) bool fatal;
@property (nonatomic, copy) NSString *message;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)fallbackBlock;
- (bool)isCalled;
- (void)markCalled;
- (id)message;
- (void)setCalled:(bool)arg1;
- (void)setFallbackBlock:(id /* block */)arg1;
- (void)setFatal:(bool)arg1;
- (void)setMessage:(id)arg1;
- (bool)shouldBeFatal;

@end
