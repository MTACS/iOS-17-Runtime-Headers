
@interface NWURLSessionDelegateDeallocBomb : NSObject {
    bool  __disarmed;
    SEL  __method;
    NSObject * __object;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
