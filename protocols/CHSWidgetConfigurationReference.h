
@protocol CHSWidgetConfigurationReference <NSObject, NSCopying>

@required

- (NSString *)uniqueIdentifier;
- (CHSWidget *)widget;

@end
