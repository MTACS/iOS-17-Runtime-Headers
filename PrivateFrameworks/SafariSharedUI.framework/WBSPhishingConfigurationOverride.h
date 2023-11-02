
@interface WBSPhishingConfigurationOverride : NSObject {
    unsigned long long  _classification;
    NSRegularExpression * _expression;
}

@property (nonatomic, readonly) unsigned long long classification;
@property (nonatomic, readonly) NSRegularExpression *expression;

- (void).cxx_destruct;
- (unsigned long long)classification;
- (id)dictionaryRepresentation;
- (id)expression;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithExpression:(id)arg1 classification:(id)arg2 error:(id*)arg3;

@end
