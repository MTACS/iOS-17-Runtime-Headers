
@interface HKClinicalStorageLocations : NSObject

+ (id)downloadableAttachmentsDirectory;
+ (id)homeMobileDirectory;
+ (id)mobileLibraryHealthDirectory;
+ (bool)removeLocalFileAtURL:(id)arg1 error:(id*)arg2;
+ (bool)storeData:(id)arg1 inLocalFileAtURL:(id)arg2 error:(id*)arg3;

@end
