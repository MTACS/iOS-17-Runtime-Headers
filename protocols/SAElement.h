
@protocol SAElement <SAElementIdentifying>

@required

- (<SAElementViewProviding> *)viewProvider;

@optional

- (NSString *)elementDescription;
- (<SAElementHosting> *)elementHost;
- (void)setElementHost:(id <SAElementHosting>)arg1;

@end
