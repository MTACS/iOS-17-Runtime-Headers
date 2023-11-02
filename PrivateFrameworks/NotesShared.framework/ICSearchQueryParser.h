
@interface ICSearchQueryParser : NSObject

+ (id)_queryStringForSingleTokenString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3 queryFlags:(id)arg4;
+ (id)prefixMatchingQueryStringForSearchString:(id)arg1 enableSpellCheckSPI:(bool)arg2 languageForSpellchecking:(id)arg3 expandedTokens:(id*)arg4;
+ (id)queryStringForExpandedTokens:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3;
+ (id)queryStringForSearchString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3;

@end
