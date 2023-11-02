
@interface CRLineWrappingClassifier : NSObject {
    NSString * _locale;
    MLModel * _model;
}

@property (nonatomic, readonly) unsigned long long featureCount;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) MLModel *model;
@property (nonatomic, readonly) NSString *modelLocale;

+ (bool)localeIsSupported:(id)arg1;
+ (id)localeToModelMap;
+ (id)modelLocaleForLocale:(id)arg1;
+ (id)urlOfModelForLocale:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)featureCount;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (id)model;
- (id)modelLocale;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;

@end
