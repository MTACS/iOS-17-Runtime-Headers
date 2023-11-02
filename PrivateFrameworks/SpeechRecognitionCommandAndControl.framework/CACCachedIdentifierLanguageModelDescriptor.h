
@interface CACCachedIdentifierLanguageModelDescriptor : NSObject {
    bool  _isCurrent;
    CACLanguageModel * _languageModel;
    struct __RXLanguageObject { } * _rxLanguageObject;
}

@property bool isCurrent;
@property (retain) CACLanguageModel *languageModel;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)isCurrent;
- (id)languageModel;
- (struct __RXLanguageObject { }*)rxLanguageObject;
- (void)setIsCurrent:(bool)arg1;
- (void)setLanguageModel:(id)arg1;
- (void)setRxLanguageObject:(struct __RXLanguageObject { }*)arg1;

@end
