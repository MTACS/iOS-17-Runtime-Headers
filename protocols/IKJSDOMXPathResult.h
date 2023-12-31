
@protocol IKJSDOMXPathResult <JSExport>

@required

- (bool)booleanValue;
- (bool)invalidIteratorState;
- (IKDOMNode *)iterateNext;
- (long long)numberValue;
- (long long)resultType;
- (IKDOMNode *)singleNodeValue;
- (IKDOMNode *)snapshotItem:(long long)arg1;
- (long long)snapshotLength;
- (NSString *)stringValue;

@end
