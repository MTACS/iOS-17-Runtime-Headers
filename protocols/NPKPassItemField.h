
@protocol NPKPassItemField <NSObject>

@required

- (PKPaymentPassAction *)action;
- (NSString *)detailLabel;
- (NSString *)formattedValue;
- (bool)hasPendingUpdate;
- (NSString *)identifier;
- (NSString *)label;

@end
