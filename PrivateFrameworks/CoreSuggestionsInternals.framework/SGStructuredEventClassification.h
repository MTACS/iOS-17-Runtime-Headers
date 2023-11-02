
@interface SGStructuredEventClassification : NSObject {
    unsigned char  _category;
    NSString * _locale;
    NSString * _providerName;
    unsigned char  _useCase;
}

@property (nonatomic, readonly) unsigned char category;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) unsigned char useCase;

+ (id)categoryForSchema:(id)arg1;
+ (id)describeCategory:(unsigned char)arg1;
+ (id)describeUseCase:(unsigned char)arg1;

- (void).cxx_destruct;
- (unsigned char)category;
- (unsigned char)categoryForCategoryString:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (unsigned char)isCancelled;
- (unsigned char)isCandidateForExtraction;
- (id)locale;
- (id)providerName;
- (unsigned char)useCase;
- (unsigned char)useCaseForUseCaseString:(id)arg1;

@end
