
@interface WFHarnessTestResultExpectation : NSObject {
    id /* block */  _block;
    NSString * _filePath;
    long long  _lineNumber;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly, copy) NSString *filePath;
@property (nonatomic, readonly) long long lineNumber;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)filePath;
- (id)initWithBlock:(id /* block */)arg1 filePath:(id)arg2 lineNumber:(long long)arg3;
- (long long)lineNumber;
- (void)testWithResult:(id)arg1 completion:(id /* block */)arg2;

@end
