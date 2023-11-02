
@interface _BPSRemoveDuplicatesInner : BPSFilterProducer {
    id /* block */  _isDuplicate;
    id  _last;
}

@property (nonatomic, readonly) id /* block */ isDuplicate;
@property (nonatomic, retain) id last;

- (void).cxx_destruct;
- (id)initWithDownstream:(id)arg1 isDuplicate:(id /* block */)arg2;
- (id /* block */)isDuplicate;
- (id)last;
- (id)receiveNewValue:(id)arg1;
- (void)setLast:(id)arg1;

@end
