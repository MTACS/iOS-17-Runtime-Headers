
@protocol APPCBasePromotableContent

@required

- (bool)attachedToView;
- (bool)available;
- (bool)consumed;
- (<APPCPromotableContext> *)context;
- (NSUUID *)contextIdentifier;
- (NSString *)disclosureRendererPayload;
- (NSURL *)disclosureURL;
- (NSError *)error;
- (NSString *)identifier;
- (double)impressionThreshold;
- (bool)placeholder;
- (void)setAttachedToView:(bool)arg1;
- (void)setConsumed:(bool)arg1;
- (void)setError:(NSError *)arg1;
- (void)setVended:(bool)arg1;
- (NSDictionary *)transparencyDetailsDictionary;
- (bool)vended;

@end
