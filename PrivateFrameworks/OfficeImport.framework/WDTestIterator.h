
@interface WDTestIterator : WDIterator {
    WDIterator * mIterator;
    id  mNext;
}

- (void).cxx_destruct;
- (bool)hasNext;
- (id)initWithIterator:(id)arg1;
- (id)next;
- (bool)test:(id)arg1;

@end
