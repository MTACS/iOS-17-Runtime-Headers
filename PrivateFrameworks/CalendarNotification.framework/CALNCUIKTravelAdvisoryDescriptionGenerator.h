
@interface CALNCUIKTravelAdvisoryDescriptionGenerator : NSObject <CALNTravelAdvisoryDescriptionGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)travelAdvisoryDescriptionOfType:(unsigned long long)arg1 hypothesis:(id)arg2 location:(id)arg3;

@end
