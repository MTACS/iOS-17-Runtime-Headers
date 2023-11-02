
@interface QUEmbeddingService : NSObject {
    CDMClient * _cdmClient;
    NSLocale * _locale;
    NSString * _version;
}

@property (nonatomic, retain) CDMClient *cdmClient;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSString *version;

+ (bool)isUnitTested;
+ (id)log;
+ (void)setTestEmbeddings:(id)arg1;
+ (id)signpostLog;
+ (id)testEmbeddings;

- (void).cxx_destruct;
- (id)cdmClient;
- (void)getEmbeddingForQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithLocale:(id)arg1 version:(id)arg2;
- (void)loadWithCompletionHandler:(id /* block */)arg1;
- (id)locale;
- (void)setCdmClient:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
