
@interface CDMToken : NSObject {
    long long  _begin;
    NSString * _cleanValue;
    long long  _end;
    bool  _isSignificant;
    bool  _isWhiteSpace;
    long long  _nonWhitespaceTokenIndex;
    NSMutableArray * _normalizedValues;
    long long  _tokenIndex;
    NSString * _value;
}

@property (nonatomic, readonly) long long begin;
@property (nonatomic, readonly) NSString *cleanValue;
@property (nonatomic, readonly) NSArray *cleanValues;
@property (nonatomic, readonly) long long end;
@property (getter=getHasCleanValues, nonatomic, readonly) bool hasCleanValues;
@property (nonatomic, readonly) bool isSignificant;
@property (nonatomic, readonly) bool isWhiteSpace;
@property (nonatomic, readonly) long long nonWhitespaceTokenIndex;
@property (nonatomic, readonly) NSArray *normalizedValues;
@property (nonatomic, readonly) long long tokenIndex;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (void)addNormalizedValue:(id)arg1;
- (long long)begin;
- (id)cleanValue;
- (id)cleanValues;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)end;
- (bool)getHasCleanValues;
- (bool)hasValue:(id)arg1 from:(long long)arg2 to:(long long)arg3;
- (id)initWithProtoToken:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(bool)arg4;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(bool)arg4 whitespace:(bool)arg5;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(bool)arg4 whitespace:(bool)arg5 cleanValue:(id)arg6;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(bool)arg4 whitespace:(bool)arg5 cleanValue:(id)arg6 tokenIndex:(long long)arg7 nonWhitespaceTokenIndex:(long long)arg8;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(bool)arg4 whitespace:(bool)arg5 cleanValue:(id)arg6 tokenIndex:(long long)arg7 nonWhitespaceTokenIndex:(long long)arg8 normalizedValues:(id)arg9;
- (bool)isSignificant;
- (bool)isWhiteSpace;
- (long long)nonWhitespaceTokenIndex;
- (id)normalizedValues;
- (long long)tokenIndex;
- (id)value;

@end
