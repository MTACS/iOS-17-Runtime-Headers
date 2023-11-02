
@interface CalMockCalendarDataContainerInfo : NSObject <CalCalendarDataContainerInfo> {
    NSString * _accountID;
    NSURL * _containerURL;
    NSString * _personaID;
    bool  _usesDataSeparatedContainer;
}

@property (nonatomic, retain) NSString *accountID;
@property (nonatomic, retain) NSURL *containerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *personaID;
@property (readonly) Class superclass;
@property (nonatomic) bool usesDataSeparatedContainer;

- (void).cxx_destruct;
- (id)accountID;
- (id)containerURL;
- (id)personaID;
- (void)setAccountID:(id)arg1;
- (void)setContainerURL:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setUsesDataSeparatedContainer:(bool)arg1;
- (bool)usesDataSeparatedContainer;

@end
