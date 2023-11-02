
@interface _MPKeyPathEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator> {
    NSArray * _sourceKeyPaths;
    id /* block */  _valueTransformBlock;
    int (* _valueTransformFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sourceKeyPaths;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ valueTransformBlock;
@property (nonatomic, readonly) int (*valueTransformFunction;

+ (id)translatorForKeyPaths:(id)arg1 valueTransformBlock:(id /* block */)arg2;
+ (id)translatorForKeyPaths:(id)arg1 valueTransformFunction:(int (*)arg2;

- (void).cxx_destruct;
- (id)sourceKeyPaths;
- (id)valueFromSource:(id)arg1 context:(id)arg2;
- (id /* block */)valueTransformBlock;
- (int (*)valueTransformFunction;

@end
