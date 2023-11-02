
@interface NRDataFileHistoryHelpers : NSObject

+ (bool)archiveDeviceHistory:(id)arg1;
+ (bool)archiveSecureProperties:(id)arg1;
+ (bool)createMissingDates:(id)arg1;
+ (id)unarchiveDeviceHistory;
+ (id)unarchiveSecureProperties;

@end
