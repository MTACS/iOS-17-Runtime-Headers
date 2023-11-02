
@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser {
    unsigned long long  _curObjectLength;
    bool  _isParsing;
    Class  _messageClass;
    bool  _parsingStandaloneMessage;
    NSMutableData * _tailParserData;
}

@property (nonatomic) unsigned long long curObjectLength;
@property (nonatomic) bool isParsing;
@property (nonatomic, retain) Class messageClass;
@property (nonatomic) bool parsingStandaloneMessage;
@property (nonatomic, retain) NSMutableData *tailParserData;

- (void).cxx_destruct;
- (bool)_parseObjectFromData:(id)arg1 rawData:(id)arg2;
- (bool)_parseObjects:(bool)arg1;
- (unsigned long long)curObjectLength;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id)initWithQoS:(long long)arg1 messageClass:(Class)arg2 parsingStandaloneMessage:(bool)arg3;
- (bool)isParsing;
- (Class)messageClass;
- (bool)parsingStandaloneMessage;
- (void)processData:(id)arg1;
- (void)setCurObjectLength:(unsigned long long)arg1;
- (void)setIsParsing:(bool)arg1;
- (void)setMessageClass:(Class)arg1;
- (void)setParsingStandaloneMessage:(bool)arg1;
- (void)setTailParserData:(id)arg1;
- (id)tailParserData;

@end
