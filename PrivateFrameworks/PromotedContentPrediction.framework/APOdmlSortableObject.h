
@interface APOdmlSortableObject : NSObject {
    NSNumber * _pTTR;
    <APOdmlRankable> * _rankable;
}

@property (nonatomic, readonly) NSNumber *pTTR;
@property (nonatomic, readonly) <APOdmlRankable> *rankable;

- (void).cxx_destruct;
- (id)initWithRankable:(id)arg1 andPTTR:(id)arg2;
- (id)pTTR;
- (id)rankable;

@end
