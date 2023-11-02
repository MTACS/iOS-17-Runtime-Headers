
@interface NSMapObservationTransformer : NSObservationTransformer {
    id  _block;
    int  _tag;
}

- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(id)arg1 tag:(int)arg2;

@end
