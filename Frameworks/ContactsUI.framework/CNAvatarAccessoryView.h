
@interface CNAvatarAccessoryView : NSObject <CNAvatarAccessoryView>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (readonly) Class superclass;

+ (id)badgeWithSystemImageNamed:(id)arg1;
+ (id)mediaContextBadgeWithImageData:(id)arg1;

@end
