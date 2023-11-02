
@protocol PBFGalleryProviding <NSObject>

@required

- (void)fetchFaceGalleryConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXFaceGalleryConfiguration *, NSError *, void*
- (void)posterBoardDidUpdateDescriptors:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (bool)shouldRequeryForGalleryAfterUpdateDescriptors;

@end
