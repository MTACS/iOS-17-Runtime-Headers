
@interface BMKeyboardTokenFrequency : BMEventBase <BMStoreData> {
    NSString * _locale;
    NSArray * _tokenFrequencies;
    int  _tokenType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *locale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tokenFrequencies;
@property (nonatomic, readonly) int tokenType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_tokenFrequenciesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTokenFrequencies:(id)arg1 locale:(id)arg2 tokenType:(int)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)locale;
- (id)serialize;
- (id)tokenFrequencies;
- (int)tokenType;
- (void)writeTo:(id)arg1;

@end
