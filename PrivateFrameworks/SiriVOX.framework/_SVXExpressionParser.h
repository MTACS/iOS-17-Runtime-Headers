
@interface _SVXExpressionParser : NSObject {
    <SVXExpressionParsingServing> * _parsingService;
    AFPreferences * _preferences;
}

@property (nonatomic, readonly) <SVXExpressionParsingServing> *parsingService;
@property (nonatomic, readonly) AFPreferences *preferences;

- (void).cxx_destruct;
- (id)initWithParsingService:(id)arg1 preferences:(id)arg2;
- (id)parsingService;
- (id)preferences;

@end
