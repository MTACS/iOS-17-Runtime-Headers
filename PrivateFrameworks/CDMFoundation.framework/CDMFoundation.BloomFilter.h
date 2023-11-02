
@interface CDMFoundation.BloomFilter : NSObject {
    void bitVector;
    void expectedItemsBuffer;
    void expectedNumberOfItems;
    void falsePositiveRate;
    void name;
    void numberOfBits;
    void numberOfHashes;
    void numberOfItems;
    void seed;
}

@property (nonatomic, readonly) double falsePositiveRate;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (bool)containsWithData:(id)arg1;
- (double)falsePositiveRate;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;

@end
