
@interface _IKDOMConditionalExpression : NSObject {
    NSSet * _dependentPathStrings;
    bool  _isNegated;
    NSArray * _operations;
}

@property (nonatomic, readonly, copy) NSSet *dependentPathStrings;

+ (id)expressionFromString:(id)arg1;
+ (id)parseExpressionsFromString:(id)arg1;

- (void).cxx_destruct;
- (id)dependentPathStrings;
- (id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(bool)arg3;
- (bool)passesForDataItem:(id)arg1;

@end
