
@protocol CalCalendarDataContainerProvider <NSObject>

@required

- (bool)accountUsesDataSeparatedContainer:(NSString *)arg1;
- (NSURL *)containerForAccountIdentifier:(NSString *)arg1;
- (<CalCalendarDataContainerInfo> *)containerInfoForAccountIdentifier:(NSString *)arg1;
- (<CalCalendarDataContainerInfo> *)containerInfoForPersonaIdentifier:(NSString *)arg1;

@end
