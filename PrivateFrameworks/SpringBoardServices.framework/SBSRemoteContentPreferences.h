
@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding> {
    long long  _backgroundStyle;
    long long  _dateTimeStyle;
    bool  _dismissesOnTap;
    long long  _homeGestureMode;
    long long  _preferredNotificationListMode;
    bool  _prefersInlinePresentation;
    bool  _reducesWhitePoint;
    bool  _suppressesBottomEdgeContent;
    bool  _suppressesNotifications;
}

+ (bool)supportsSecureCoding;

- (long long)backgroundStyle;
- (long long)dateTimeStyle;
- (bool)dismissesOnTap;
- (void)encodeWithCoder:(id)arg1;
- (long long)homeGestureMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)preferredNotificationListMode;
- (bool)prefersInlinePresentation;
- (bool)reducesWhitePoint;
- (bool)suppressesBottomEdgeContent;
- (bool)suppressesNotifications;

@end
