
@interface TACircularBuffer : NSObject <NSSecureCoding> {
    NSMutableArray * _buffer;
    unsigned long long  _capacity;
}

@property (nonatomic, retain) NSMutableArray *buffer;
@property (nonatomic, readonly) unsigned long long capacity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)add:(id)arg1;
- (id)buffer;
- (id)bufferCopy;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (id)description;
- (id)dropOldestElement;
- (void)encodeWithCoder:(id)arg1;
- (id)firstObject;
- (id)firstObjectMatchingTest:(id /* block */)arg1 withOptions:(unsigned long long)arg2;
- (id)getObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)insert:(id)arg1 at:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastObject;
- (id)objectsMatchingPredicate:(id)arg1;
- (id)removeLastObject;
- (id)removeUntilFirstPredicateFail:(id)arg1;
- (id)removeWithPredicate:(id)arg1;
- (void)setBuffer:(id)arg1;

@end
