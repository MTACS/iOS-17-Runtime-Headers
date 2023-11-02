
@interface AMSRatingsStoreFront : NSObject {
    NSString * _defaultLanguage;
    unsigned long long  _mediaType;
    NSString * _name;
    NSArray * _ratingSystems;
    NSString * _storeFront;
    NSString * _storeFrontID;
    NSArray * _supportedLanguages;
}

@property (nonatomic, readonly) NSString *defaultLanguage;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *ratingSystems;
@property (nonatomic, readonly) NSString *storeFront;
@property (nonatomic, readonly) NSString *storeFrontID;
@property (nonatomic, readonly) NSArray *supportedLanguages;

+ (id)storeFrontWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2;
+ (id)storeFrontWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;

- (void).cxx_destruct;
- (id)defaultLanguage;
- (id)description;
- (id)initWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;
- (unsigned long long)mediaType;
- (id)name;
- (id)ratingSystems;
- (id)storeFront;
- (id)storeFrontID;
- (id)supportedLanguages;

@end
