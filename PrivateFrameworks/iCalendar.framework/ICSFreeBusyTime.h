
@interface ICSFreeBusyTime : ICSProperty

@property (nonatomic) unsigned long long fbtype;

- (unsigned long long)fbtype;
- (id)initWithPeriod:(id)arg1;
- (void)setFbtype:(unsigned long long)arg1;

@end
