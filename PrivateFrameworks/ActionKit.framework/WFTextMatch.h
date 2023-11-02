
@interface WFTextMatch : INObject

@property (nonatomic, copy) NSNumber *caseSensitive;
@property (nonatomic, copy) NSNumber *index;
@property (nonatomic, copy) NSString *pattern;
@property (nonatomic, copy) NSString *text;

@end
