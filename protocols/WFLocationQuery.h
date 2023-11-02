
@protocol WFLocationQuery <NSObject>

@required

- (WFTaskIdentifier *)identifier;
- (WFResponse *)response;
- (void)setIdentifier:(WFTaskIdentifier *)arg1;
- (void)start;

@end
