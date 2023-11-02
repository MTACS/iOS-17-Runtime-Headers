
@interface _NSURLBDOnce : NSObject {
    id /* block */  fBlock;
    bool  fDone;
}

- (void)dealloc;

@end
