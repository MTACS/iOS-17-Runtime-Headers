
@interface PPSClientInterface : NSObject

+ (void)buildDeviceMetadata;
+ (id)getAllFrameworkSubsystem;
+ (id)getAllSubsystem;
+ (id)getMetadataByCategoryForSubsystem:(id)arg1;
+ (id)getMetadataByNameForSubsystem:(id)arg1 category:(id)arg2;
+ (id)getMetadataForSubsystem:(id)arg1;
+ (id)getMetadataForSubsystem:(id)arg1 category:(id)arg2;
+ (id)getMetadataForSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
+ (id)getMetadataHistoryForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3;
+ (id)getMetadataHistoryForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3 name:(id)arg4;

@end
