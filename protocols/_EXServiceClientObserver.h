
@protocol _EXServiceClientObserver <NSObject>

@required

- (NSArray *)queries;

@optional

- (void)availabilityDidChange:(_EXExtensionAvailablility *)arg1;
- (void)query:(_EXQuery *)arg1 resultDidUpdate:(_EXQueryResultUpdate *)arg2;

@end
