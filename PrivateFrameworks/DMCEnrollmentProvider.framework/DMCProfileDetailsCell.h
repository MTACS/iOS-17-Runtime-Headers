
@interface DMCProfileDetailsCell : UITableViewCell

+ (id)cellIdentifier;
+ (id)localizedExpirationLabelForExpiry:(id)arg1;

- (id)_attributedSubtitleComboWithSubtitle1:(id)arg1 subtitle2:(id)arg2 nearExpiration:(bool)arg3;
- (id)_attributes:(id)arg1 modifiedWithAttributes:(id)arg2;
- (id)_expirationSubtitleForExpiry:(id)arg1 outNearExpiration:(bool*)arg2;
- (id)_textForLabel:(id)arg1 value:(id)arg2;
- (id)_titleFromCertificate:(struct __SecCertificate { }*)arg1 outSubtitle1:(id*)arg2 outSubtitle2:(id*)arg3 outNearExpiration:(bool*)arg4;
- (id)_titleFromPayloadInfo:(id)arg1 outSubtitle1:(id*)arg2 outSubtitle2:(id*)arg3 outNearExpiration:(bool*)arg4;
- (void)setDetails:(id)arg1;

@end
