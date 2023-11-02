
@protocol CalCalendarDataContainerInfo <NSObject>

@required

- (NSString *)accountID;
- (NSURL *)containerURL;
- (NSString *)personaID;
- (bool)usesDataSeparatedContainer;

@end
