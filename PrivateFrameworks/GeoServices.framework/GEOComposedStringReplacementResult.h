
@interface GEOComposedStringReplacementResult : NSObject {
    NSAttributedString * attributedString;
    NSString * string;
    NSArray * styleReplacementResults;
    bool  success;
    NSArray * tokenReplacementResults;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSArray *styleReplacementResults;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) NSArray *tokenReplacementResults;

- (void).cxx_destruct;
- (id)attributedString;
- (id)string;
- (id)styleReplacementResults;
- (bool)success;
- (id)tokenReplacementResults;

@end
