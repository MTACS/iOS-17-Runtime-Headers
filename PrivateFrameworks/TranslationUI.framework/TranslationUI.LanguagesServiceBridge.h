
@interface TranslationUI.LanguagesServiceBridge : NSObject {
    void models;
    void service;
    void subscriptions;
}

@property (nonatomic, copy) NSArray *models;

+ (id)modelsKeyPath;

- (void).cxx_destruct;
- (void)deleteLocale:(id)arg1;
- (void)downloadLocales:(id)arg1;
- (id)init;
- (id)modelForLocale:(id)arg1;
- (id)models;
- (void)setModels:(id)arg1;

@end
