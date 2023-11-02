
@interface UILinkConnectionActionResponse : BSActionResponse

@property (nonatomic, readonly) LNConnectionActionResponse *actionResponse;

- (id)actionResponse;
- (id)initWithActionResponse:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
