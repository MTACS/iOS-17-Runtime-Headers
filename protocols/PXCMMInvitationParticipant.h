
@protocol PXCMMInvitationParticipant <NSObject>

@required

- (NSString *)emailAddressString;
- (NSString *)firstName;
- (NSString *)localizedName;
- (NSString *)phoneNumberString;

@end
