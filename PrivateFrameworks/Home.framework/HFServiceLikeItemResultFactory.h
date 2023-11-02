
@interface HFServiceLikeItemResultFactory : NSObject

+ (void)_appendDestinationURLResultsForHomeKitObject:(id)arg1 backingAccessory:(id)arg2 toResults:(id)arg3;
+ (void)_appendSoftwareUpdateResultsForAccessory:(id)arg1 toResults:(id)arg2;
+ (id)populateStandardResultsForHomeKitObject:(id)arg1 withBackingAccessory:(id)arg2 displayMetadata:(id)arg3 readResponse:(id)arg4 batteryLevelResults:(id)arg5 valueSource:(id)arg6 updateOptions:(id)arg7;

@end
