
@interface ICASSearchBufferArrayData : NSObject <AADataEventType> {
    NSNumber * _isResultSelected;
    NSNumber * _nonTopHitCount;
    NSNumber * _nonTopHitRawCount;
    NSNumber * _searchStringLength;
    NSNumber * _topHitCount;
}

@property (nonatomic, readonly) NSNumber *isResultSelected;
@property (nonatomic, readonly) NSNumber *nonTopHitCount;
@property (nonatomic, readonly) NSNumber *nonTopHitRawCount;
@property (nonatomic, readonly) NSNumber *searchStringLength;
@property (nonatomic, readonly) NSNumber *topHitCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSearchStringLength:(id)arg1 topHitCount:(id)arg2 nonTopHitCount:(id)arg3 isResultSelected:(id)arg4 nonTopHitRawCount:(id)arg5;
- (id)isResultSelected;
- (id)nonTopHitCount;
- (id)nonTopHitRawCount;
- (id)searchStringLength;
- (id)toDict;
- (id)topHitCount;

@end
