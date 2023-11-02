
@interface _SVXAddViewsExpressionParser : _SVXExpressionParser {
    bool  _ignoresLocallyParseableExpressions;
}

@property (nonatomic) bool ignoresLocallyParseableExpressions;

- (bool)ignoresLocallyParseableExpressions;
- (id)initWithParsingService:(id)arg1 preferences:(id)arg2;
- (void)parseAddViews:(id)arg1 reply:(id /* block */)arg2;
- (void)setIgnoresLocallyParseableExpressions:(bool)arg1;

@end
