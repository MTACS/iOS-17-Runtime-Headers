
@interface CRKIndexPair : NSObject {
    long long  _destinationIndex;
    long long  _sourceIndex;
}

@property (nonatomic) long long destinationIndex;
@property (nonatomic) long long sourceIndex;

- (id)description;
- (long long)destinationIndex;
- (void)setDestinationIndex:(long long)arg1;
- (void)setSourceIndex:(long long)arg1;
- (long long)sourceIndex;

@end
