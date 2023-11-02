
@interface KSXMLElementContentsProxy : NSProxy {
    KSXMLWriter * _XMLWriter;
    unsigned long long  _elementsCount;
    id  _target;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (void)ks_prepareWithTarget:(id)arg1 XMLWriter:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
