
@interface _CNLazyArrayOperator : NSObject <_CNLazyArrayOperation> {
    _CNLazyArrayOperator * _input;
}

@property (readonly) <_CNLazyArrayOperation> *input;

- (void).cxx_destruct;
- (id)initWithInput:(id)arg1;
- (id)input;
- (id)nextObject;

@end
