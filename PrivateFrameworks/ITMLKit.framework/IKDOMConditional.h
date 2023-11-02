
@interface IKDOMConditional : NSObject {
    NSSet * _dependentPathStrings;
    IKDOMElement * _domElement;
    NSArray * _exclusionExpressions;
    NSString * _identifier;
    NSArray * _inclusionExpressions;
}

@property (nonatomic, readonly, copy) NSSet *dependentPathStrings;
@property (nonatomic, readonly) IKDOMElement *domElement;
@property (nonatomic, readonly, copy) NSArray *exclusionExpressions;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *inclusionExpressions;

- (void).cxx_destruct;
- (id)dependentPathStrings;
- (id)domElement;
- (id)exclusionExpressions;
- (id)identifier;
- (id)inclusionExpressions;
- (id)initWithDOMElement:(id)arg1;
- (void)mutateWithDOMElement:(id)arg1;
- (bool)passesForDataItem:(id)arg1 default:(bool)arg2;

@end
