
@interface PROCAPIDelegate : NSObject {
    int (* callback;
    void * userData;
}

- (void)plugInManager:(id)arg1 didLoadPlugIn:(id)arg2;

@end
