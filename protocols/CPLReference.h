
@protocol CPLReference <NSObject>

@required

- (NSDictionary *)extraProperties;
- (void)setExtraProperties:(NSDictionary *)arg1;

@optional

- (long long)compare:(id <CPLReference>)arg1;

@end
