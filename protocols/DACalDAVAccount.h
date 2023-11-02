
@protocol DACalDAVAccount <NSObject>

@required

- (<CalDAVPrincipal> *)mainPrincipal;
- (void)setMainPrincipal:(id <CalDAVPrincipal>)arg1;
- (void)setSubscribedCalendars:(NSDictionary *)arg1;
- (NSDictionary *)subscribedCalendars;

@end
