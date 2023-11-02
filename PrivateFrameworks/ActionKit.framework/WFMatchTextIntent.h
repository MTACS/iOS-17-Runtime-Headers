
@interface WFMatchTextIntent : INIntent

@property (nonatomic, copy) NSNumber *caseSensitive;
@property (nonatomic, copy) NSString *pattern;
@property (nonatomic, copy) NSString *text;

@end
