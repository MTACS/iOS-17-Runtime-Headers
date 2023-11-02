
@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider, NSSecureCoding> {
    NSDictionary * _accountsWithSpecificContainers;
    NSURL * _calendarDataContainerURL;
    NSDictionary * _personaIDsByContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accountUsesDataSeparatedContainer:(id)arg1;
- (id)containerForAccountIdentifier:(id)arg1;
- (id)containerInfoForAccountIdentifier:(id)arg1;
- (id)containerInfoForPersonaIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountDataContainerMap:(id)arg1 defaultDataContainer:(id)arg2;
- (id)initWithCalendarDataContainerURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)personaForAccountIdentifier:(id)arg1;

@end
