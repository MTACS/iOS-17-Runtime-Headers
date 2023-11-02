
@interface CRKClassroomInstallation : NSObject <NSCopying> {
    NSString * _classroomBundleIdentifier;
    NSURL * _classroomURL;
    NSString * _instructorKitImagePath;
    NSString * _instructordBundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *classroomBundleIdentifier;
@property (nonatomic, readonly) NSURL *classroomURL;
@property (nonatomic, readonly, copy) NSString *instructorKitImagePath;
@property (nonatomic, readonly, copy) NSString *instructordBundleIdentifier;

+ (bool)anyInstallationExists;
+ (id)iOSInstallation;
+ (id)installationWithClassroomBundleIdentifier:(id)arg1 bundleHasContentsFolder:(bool)arg2 instructordBundleIdentifier:(id)arg3;
+ (id)instructorKitImagePathInBundle:(id)arg1 hasContentsFolder:(bool)arg2;
+ (id)macOSInstallation;
+ (id)preferredInstallation;

- (void).cxx_destruct;
- (id)classroomBundleIdentifier;
- (id)classroomURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithClassroomURL:(id)arg1 classroomBundleIdentifier:(id)arg2 instructorKitImagePath:(id)arg3 instructordBundleIdentifier:(id)arg4;
- (id)instructorKitImagePath;
- (id)instructordBundleIdentifier;

@end
