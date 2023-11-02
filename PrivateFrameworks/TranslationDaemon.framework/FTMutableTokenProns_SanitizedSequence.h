
@interface FTMutableTokenProns_SanitizedSequence : FTTokenProns_SanitizedSequence

@property (nonatomic, copy) NSArray *sanitized_tokens;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)sanitized_tokens;
- (void)setSanitized_tokens:(id)arg1;

@end
