
@interface AADelayedToken : NSObject {
    void block;
    void sealed;
}

- (void).cxx_destruct;
- (void)commit;
- (id)init;

@end
