
@interface __NSCFDeallocBomb : NSObject {
    bool  disarmed;
    SEL  method;
    id  object;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
