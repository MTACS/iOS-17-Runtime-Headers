
@interface PHShare : NSObject <PHShare> {
    NSString * _singletonPhotoLibraryPath;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) short publicPermission;
@property (nonatomic, readonly) short publishState;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) unsigned short status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short trashedState;

+ (id)PHShareErrorFromError:(id)arg1;
+ (void)acceptShareWithUUID:(id)arg1 photoLibrary:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchShareFromShareURL:(id)arg1 ignoreExistingShare:(bool)arg2 photoLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)publishShareWithUUID:(id)arg1 photoLibrary:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)init;

@end
