
@interface ICASEndDocScanPageData : NSObject <AADataEventType> {
    NSNumber * _endPageCount;
}

@property (nonatomic, readonly) NSNumber *endPageCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endPageCount;
- (id)initWithEndPageCount:(id)arg1;
- (id)toDict;

@end
