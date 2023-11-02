
@interface WDArrayIterator : WDIterator {
    NSArray * mArray;
    unsigned int  mNextIndex;
}

- (void).cxx_destruct;
- (bool)hasNext;
- (id)initWithArray:(id)arg1;
- (id)next;

@end
