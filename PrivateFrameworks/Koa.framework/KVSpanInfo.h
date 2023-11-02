
@interface KVSpanInfo : NSObject <NSCopying> {
    NSData * _buffer;
    const struct SpanInfo { unsigned char x1[1]; } * _spanInfo;
    NSString * _value;
}

+ (id)spanInfoFromEncodedString:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (unsigned short)aliasMatchOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)editDistance;
- (id)encodedString;
- (id)getAliasTypesArray;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuffer:(id)arg1 verify:(bool)arg2 value:(id)arg3 error:(id*)arg4;
- (id)initWithValue:(id)arg1 location:(unsigned int)arg2 length:(unsigned int)arg3 matchScore:(float)arg4 maxTokenCount:(unsigned int)arg5 matchedTokenCount:(unsigned int)arg6 maxStopWordCount:(unsigned int)arg7 matchedStopWordCount:(unsigned int)arg8 maxAliasCount:(unsigned int)arg9 matchedAliasCount:(unsigned int)arg10 editDistance:(unsigned int)arg11 aliasMatchOptions:(unsigned short)arg12;
- (bool)isAliasMatch;
- (bool)isApproximateMatch;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpanInfo:(id)arg1;
- (bool)isPartialMatch;
- (float)matchScore;
- (unsigned int)matchedAliasCount;
- (unsigned int)matchedStopWordCount;
- (unsigned int)matchedTokenCount;
- (unsigned int)maxAliasCount;
- (unsigned int)maxStopWordCount;
- (unsigned int)maxTokenCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })spanRange;
- (id)value;

@end
