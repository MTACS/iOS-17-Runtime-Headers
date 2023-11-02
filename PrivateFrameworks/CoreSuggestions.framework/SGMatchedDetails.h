
@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _detailTokenMap;
    NSDictionary * _tokenDetailMap;
}

+ (id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;
+ (bool)supportsSecureCoding;
+ (long long)tokenMatchedDetailTypeForContact:(id)arg1 contactEntityId:(id)arg2 detailEntityId:(id)arg3 matchedDetailReader:(id)arg4 phraseNumber:(unsigned int)arg5 token:(id)arg6;
+ (long long)tokenMatchedDetailTypeForContact:(id)arg1 matchedDetailReader:(id)arg2 phraseNumber:(unsigned int)arg3 token:(id)arg4;
+ (long long)tokensMatchedDetailTypeForContact:(id)arg1 contactEntityId:(id)arg2 detailEntityId:(id)arg3 matchinfoData:(id)arg4 tokens:(id)arg5;

- (void).cxx_destruct;
- (void)_addToTokenDetailMap:(id)arg1 token:(id)arg2 detail:(id)arg3;
- (void)_initilizeDictionariesFromTokenDetailMap:(id)arg1;
- (void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3 tokenDetailMap:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMatchedDetails:(id)arg1;
- (id)matchedDetailsForToken:(id)arg1;
- (id)tokensForDetail:(id)arg1;

@end
