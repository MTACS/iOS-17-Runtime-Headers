
@interface CalUMCalendarDataContainerInfo : NSObject <CalCalendarDataContainerInfo> {
    NSString * _accountID;
    NSURL * _containerURL;
    NSString * _personaID;
    bool  _usesDataSeparatedContainer;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSURL *containerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesDataSeparatedContainer;

+ (id)_calendarGroupContainer;

- (void).cxx_destruct;
- (id)accountID;
- (id)containerURL;
- (id)initWithAccountID:(id)arg1;
- (id)initWithPersonaID:(id)arg1;
- (id)personaID;
- (bool)usesDataSeparatedContainer;

@end
