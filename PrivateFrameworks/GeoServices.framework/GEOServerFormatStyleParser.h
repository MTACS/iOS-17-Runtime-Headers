
@interface GEOServerFormatStyleParser : NSObject {
    NSMutableArray * _openStyleLocations;
    NSMutableArray * _openStyleNames;
    bool  _parsed;
    NSArray * _results;
    NSString * _string;
    NSMutableArray * _styleNames;
    NSMutableArray * _styleRanges;
    NSMutableArray * _tokenRanges;
}

@property (nonatomic, readonly) NSArray *styles;
@property (nonatomic, readonly) NSArray *tokenRanges;

- (void).cxx_destruct;
- (bool)_handleClosingResult:(id)arg1;
- (bool)_handleOpeningResult:(id)arg1;
- (void)_parse;
- (void)_parseIfNeeded;
- (void)_removeTokensFromAttributedString:(id)arg1;
- (id)attributedStringWithStyleAttributes:(id)arg1 defaultAttributes:(id)arg2;
- (void)enumerateStylesWithBlock:(id /* block */)arg1;
- (void)enumerateTokenRangesForRemoval:(id /* block */)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForStyleAtIndex:(unsigned long long)arg1;
- (id)styles;
- (id)tokenRanges;

@end
