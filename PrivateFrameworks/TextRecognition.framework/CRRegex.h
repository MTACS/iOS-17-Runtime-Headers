
@interface CRRegex : NSObject {
    NSArray * _supportedRegularExpressions;
}

@property (nonatomic, retain) NSArray *supportedRegularExpressions;

- (void).cxx_destruct;
- (id)init;
- (void)setSupportedRegularExpressions:(id)arg1;
- (bool)stringMatchesRegex:(id)arg1;
- (id)supportedRegularExpressions;

@end
