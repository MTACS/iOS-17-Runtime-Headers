
@interface SGMIWarningsDetectionRegexes : NSObject {
    SGMIWarningsDetectionRegex * _body;
    NSDictionary * _dataDetectorAdditions;
    NSDictionary * _dataDetectorMappedAdditions;
    SGMIWarningsDetectionRegex * _subject;
}

@property (nonatomic, readonly) SGMIWarningsDetectionRegex *body;
@property (nonatomic, readonly) NSDictionary *dataDetectorAdditions;
@property (nonatomic, readonly) NSDictionary *dataDetectorMappedAdditions;
@property (nonatomic, readonly) SGMIWarningsDetectionRegex *subject;

+ (id)_loadDataDetectorAdditionDict:(id)arg1 compiledRegexCache:(id)arg2;

- (void).cxx_destruct;
- (id)body;
- (id)dataDetectorAdditions;
- (id)dataDetectorMappedAdditions;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 compiledRegexCache:(id)arg2;
- (id)subject;

@end
