
@interface WFSplitTextIntent : INIntent

@property (nonatomic, copy) NSString *customSeparator;
@property (nonatomic) long long separator;
@property (nonatomic, copy) NSArray *text;

@end
