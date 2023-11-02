
@interface CalCalendarLocalAccountInfo : NSObject <CDBAccountInfo>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)addressIsAccountOwner:(id)arg1;

@end
