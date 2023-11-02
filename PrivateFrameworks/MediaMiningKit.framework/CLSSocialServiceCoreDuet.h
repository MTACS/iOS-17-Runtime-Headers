
@interface CLSSocialServiceCoreDuet : CLSSocialService {
    CLSSocialServiceContacts * _contactSocialService;
}

@property (retain) CLSSocialServiceContacts *contactSocialService;

- (void).cxx_destruct;
- (id)contactSocialService;
- (id)coreDuetPersonSuggestionsOnDate:(id)arg1;
- (id)init;
- (void)setContactSocialService:(id)arg1;

@end
