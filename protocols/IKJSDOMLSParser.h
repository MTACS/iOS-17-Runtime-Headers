
@protocol IKJSDOMLSParser <JSExport>

@required

- (long long)appendAsChildrenAction;
- (long long)insertAfterAction;
- (long long)insertBeforeAction;
- (IKDOMDocument *)parse:(IKDOMLSInput *)arg1;
- (IKDOMNode *)parseWithContext:(IKDOMLSInput *)arg1 :(IKDOMNode *)arg2 :(long long)arg3;
- (long long)replaceAction;
- (long long)replaceChildrenAction;

@end
