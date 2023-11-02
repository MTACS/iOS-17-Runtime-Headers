
@interface AVTAvatarLibraryCreateNewItem : NSObject <AVTAvatarLibraryItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellIdentifier;

- (void)configureCell:(id)arg1 imageProvider:(id)arg2;

@end
