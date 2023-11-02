
@interface CNVCardLine21SerializationStrategy : CNVCardLineSerializationStrategyImpl {
    NSArray * _encodings;
}

+ (id)serializerWithStorage:(id)arg1 encodings:(id)arg2;

- (void).cxx_destruct;
- (void)_addAutomagicParametersForData:(id)arg1;
- (id)detectedTypeOfData:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)initWithStorage:(id)arg1 encodings:(id)arg2;
- (id)necessaryEncodingForValue:(id)arg1;
- (void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
- (void)serializeData:(id)arg1;
- (void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2;
- (void)serializeParameters:(id)arg1;
- (void)serializeString:(id)arg1;
- (void)serializeVersionPlaceholder;

@end
