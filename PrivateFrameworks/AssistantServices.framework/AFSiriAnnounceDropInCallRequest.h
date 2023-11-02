
@interface AFSiriAnnounceDropInCallRequest : NSObject <AFSiriExternalRequest> {
    long long  _announcementType;
}

- (id)initWithAnnouncementType:(long long)arg1;
- (void)performRequestWithCompletion:(id /* block */)arg1;

@end
