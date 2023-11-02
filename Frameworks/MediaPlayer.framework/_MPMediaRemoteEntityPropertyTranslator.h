
@interface _MPMediaRemoteEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator> {
    NSString * _keyPath;
    id /* block */  _valueTransformBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ valueTransformBlock;

+ (id)translatorWithBlock:(id /* block */)arg1;
+ (id)translatorWithKeyPath:(id)arg1;

- (void).cxx_destruct;
- (id)keyPath;
- (id)valueFromSource:(id)arg1 context:(id)arg2;
- (id /* block */)valueTransformBlock;

@end
