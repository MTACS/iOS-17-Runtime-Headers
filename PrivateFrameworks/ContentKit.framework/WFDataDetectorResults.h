
@interface WFDataDetectorResults : NSObject {
    NSArray * _dictionaries;
    WFFileType * _dictionaryType;
    NSNumber * _number;
    NSArray * _textCheckingResults;
}

@property (nonatomic, readonly) NSArray *URLs;
@property (nonatomic, readonly) NSArray *dateComponentsResults;
@property (nonatomic, readonly) NSArray *dates;
@property (nonatomic, readonly) NSArray *dictionaries;
@property (nonatomic, readonly) WFFileType *dictionaryType;
@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *streetAddresses;
@property (nonatomic, readonly) NSArray *textCheckingResults;

- (void).cxx_destruct;
- (id)URLs;
- (id)dateComponentsResults;
- (id)dates;
- (id)dictionaries;
- (id)dictionaryType;
- (id)init;
- (id)initWithTextCheckingResults:(id)arg1 number:(id)arg2 dictionaries:(id)arg3 dictionaryType:(id)arg4;
- (id)number;
- (id)phoneNumbers;
- (id)streetAddresses;
- (id)textCheckingResults;

@end
