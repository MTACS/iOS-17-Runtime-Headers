
@interface PREResponsesGeneratedEvent : NSObject {
    int  _generationStatus;
    bool  _hasQuestionMark;
    bool  _isCached;
    NSString * _language;
    NSString * _locale;
    unsigned long long  _messageCharCount;
    unsigned long long  _responseGenerationTime;
    unsigned long long  _responseTimePerf;
    NSArray * _responses;
}

@property (nonatomic) int generationStatus;
@property (nonatomic) bool hasQuestionMark;
@property (nonatomic) bool isCached;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) unsigned long long messageCharCount;
@property (nonatomic) unsigned long long responseGenerationTime;
@property (nonatomic) unsigned long long responseTimePerf;
@property (nonatomic, retain) NSArray *responses;

- (void).cxx_destruct;
- (int)generationStatus;
- (bool)hasQuestionMark;
- (bool)isCached;
- (id)language;
- (id)locale;
- (unsigned long long)messageCharCount;
- (unsigned long long)responseGenerationTime;
- (unsigned long long)responseTimePerf;
- (id)responses;
- (void)setGenerationStatus:(int)arg1;
- (void)setHasQuestionMark:(bool)arg1;
- (void)setIsCached:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMessageCharCount:(unsigned long long)arg1;
- (void)setResponseGenerationTime:(unsigned long long)arg1;
- (void)setResponseTimePerf:(unsigned long long)arg1;
- (void)setResponses:(id)arg1;

@end
