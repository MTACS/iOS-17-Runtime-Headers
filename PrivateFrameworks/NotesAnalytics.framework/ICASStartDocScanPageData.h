
@interface ICASStartDocScanPageData : NSObject <AADataEventType> {
    NSNumber * _startPageCount;
}

@property (nonatomic, readonly) NSNumber *startPageCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithStartPageCount:(id)arg1;
- (id)startPageCount;
- (id)toDict;

@end
