
@interface WFPortalContext : NSObject {
    NSString * _userPortalURL;
    NSString * _venueInfoURL;
}

@property (nonatomic, copy) NSString *userPortalURL;
@property (nonatomic, copy) NSString *venueInfoURL;

- (void).cxx_destruct;
- (id)initWithCaptiveProfile:(id)arg1;
- (id)portalURLForDisplay;
- (void)setUserPortalURL:(id)arg1;
- (void)setVenueInfoURL:(id)arg1;
- (id)userPortalURL;
- (id)venueInfoURL;

@end
