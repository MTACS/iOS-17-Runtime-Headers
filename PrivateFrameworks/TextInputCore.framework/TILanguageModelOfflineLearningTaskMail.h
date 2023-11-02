
@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {
    <TILinguisticDataSource> * _dataSource;
    NSSet * _forwardedMessageSeparators;
    NSCharacterSet * _linePaddingCharacters;
}

+ (id)dataSourceForTask;

- (void).cxx_destruct;
- (id)dataSource;
- (id)forwardedMessageSeparators;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(bool)arg2;
- (id)linePaddingCharacters;

@end
