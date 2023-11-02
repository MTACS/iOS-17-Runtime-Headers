
@interface TTKTestCaseRecord : NSObject {
    NSArray * _additionalIntendedTexts;
    NSString * _context;
    NSString * _inputText;
    NSMutableDictionary * _internalAnnotations;
    NSString * _layoutName;
    NSString * _primaryIntendedText;
    NSString * _recordID;
    NSArray * _touchDataCollection;
    NSString * _transliteration;
}

@property (nonatomic, readonly, copy) NSArray *additionalIntendedTexts;
@property (nonatomic, readonly, copy) NSMutableDictionary *annotations;
@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSString *inputText;
@property (nonatomic, readonly, copy) NSArray *intendedText;
@property (nonatomic, readonly, copy) NSString *layoutName;
@property (nonatomic, readonly, copy) NSString *primaryIntendedText;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (nonatomic, readonly, copy) TIContinuousPath *touchData;
@property (nonatomic, readonly, copy) NSArray *touchDataCollection;
@property (nonatomic, readonly, copy) NSString *transliteration;

- (void).cxx_destruct;
- (id)additionalIntendedTexts;
- (id)annotations;
- (id)context;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIntendedText:(id)arg1 additionalIntendedTexts:(id)arg2 touchDataCollection:(id)arg3 recordID:(id)arg4 layoutName:(id)arg5 inputText:(id)arg6 transliteration:(id)arg7 context:(id)arg8 annotations:(id)arg9;
- (id)inputText;
- (id)intendedText;
- (id)layoutName;
- (id)primaryIntendedText;
- (id)recordID;
- (void)setAnnotation:(id)arg1 forKey:(id)arg2;
- (id)toJsonDictionary;
- (id)touchData;
- (id)touchDataCollection;
- (id)transliteration;

@end
