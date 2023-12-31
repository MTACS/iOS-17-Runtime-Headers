
@interface ICDispatchAfterHandler : NSObject {
    NSMutableDictionary * _identifierBlockMap;
}

@property (nonatomic, retain) NSMutableDictionary *identifierBlockMap;

+ (id)appLifeCycleHandler;

- (void).cxx_destruct;
- (void)cancelAll;
- (void)cancelBlocksWithStringIdentifier:(id)arg1;
- (void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(id /* block */)arg3;
- (id)identifierBlockMap;
- (id)identifierForStringIdentifier:(id)arg1;
- (id)init;
- (void)setIdentifierBlockMap:(id)arg1;

@end
