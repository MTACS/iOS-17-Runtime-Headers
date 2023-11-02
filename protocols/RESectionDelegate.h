
@protocol RESectionDelegate <NSObject>

@required

- (REElementGroup *)section:(RESection *)arg1 groupForIdentifier:(NSString *)arg2;
- (void)sectionDidUpdateContentOrder:(RESection *)arg1;

@end
