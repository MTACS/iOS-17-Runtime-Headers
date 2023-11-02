
@interface SKUITemplateParsingDataProvider : SSVURLDataConsumer {
    NSRegularExpression * _regularExpression;
}

@property (nonatomic, readonly) NSRegularExpression *regularExpression;

+ (id)templateParsingRegularExpression;

- (void).cxx_destruct;
- (id)initWithRegularExpression:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (id)regularExpression;

@end
