
@interface ICSParser : NSObject {
    NSData * _data;
    ICSTokenizer * _lexer;
    unsigned long long  _options;
    <ICSUIDGenerator> * _uidGenerator;
}

@property (nonatomic, readonly) ICSTokenizer *lexer;

+ (id)entitiesFromNSData:(id)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_parseComponent:(id)arg1;
- (void)_parseComponent:(id)arg1 depth:(unsigned long long)arg2 fatalError:(bool*)arg3;
- (bool)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3 fatalError:(bool*)arg4;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;
- (id)lexer;
- (id)makeComponent:(const char *)arg1;
- (id)parseData;
- (bool)parseParameter:(id)arg1 fatalError:(bool*)arg2;
- (bool)parseProperty:(id)arg1 fatalError:(bool*)arg2;

@end
