
@interface WFMatchTextGetGroupIntent : INIntent

@property (nonatomic, copy) NSNumber *groupIndex;
@property (nonatomic, copy) NSArray *matches;
@property (nonatomic) long long type;

@end
