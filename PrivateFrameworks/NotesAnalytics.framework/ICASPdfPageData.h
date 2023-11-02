
@interface ICASPdfPageData : NSObject <AADataEventType> {
    NSNumber * _endPageCount;
    NSNumber * _startPageCount;
}

@property (nonatomic, readonly) NSNumber *endPageCount;
@property (nonatomic, readonly) NSNumber *startPageCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endPageCount;
- (id)initWithStartPageCount:(id)arg1 endPageCount:(id)arg2;
- (id)startPageCount;
- (id)toDict;

@end
