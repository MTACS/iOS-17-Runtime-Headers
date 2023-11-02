
@interface PXBackgroundFetchToken : NSObject {
    bool  _finished;
}

- (void)dealloc;
- (void)finish;
- (id)init;

@end
