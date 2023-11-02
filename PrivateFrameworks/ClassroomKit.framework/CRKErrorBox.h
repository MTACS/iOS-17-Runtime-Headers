
@interface CRKErrorBox : NSObject <CRKDictionaryCodable> {
    NSError * _error;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSError *error;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)error;
- (id)initWithError:(id)arg1;

@end
