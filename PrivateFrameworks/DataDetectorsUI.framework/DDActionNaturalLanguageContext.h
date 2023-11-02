
@interface DDActionNaturalLanguageContext : NSObject {
    NSArray * _associatedResults;
    NSString * _bundleIdentifier;
    NSString * _leadingText;
    struct __DDResult { } * _result;
    NSString * _trailingText;
}

@property (retain) NSArray *associatedResults;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *leadingText;
@property (retain) struct __DDResult { }*result;
@property (retain) NSString *trailingText;

- (void).cxx_destruct;
- (id)associatedResults;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)leadingText;
- (struct __DDResult { }*)result;
- (void)setAssociatedResults:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLeadingText:(id)arg1;
- (void)setResult:(struct __DDResult { }*)arg1;
- (void)setTrailingText:(id)arg1;
- (id)trailingText;

@end
