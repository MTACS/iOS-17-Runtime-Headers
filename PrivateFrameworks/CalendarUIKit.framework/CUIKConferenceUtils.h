
@interface CUIKConferenceUtils : NSObject

+ (unsigned long long)_buttonTypeForApplicationRecord:(id)arg1 URL:(id)arg2 isBroadcast:(bool)arg3;
+ (void)_displayDetailsForURL:(id)arg1 isBroadcast:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)_imageForApplicationRecord:(id)arg1 URL:(id)arg2 isBroadcast:(bool)arg3;
+ (id)_platformImageForISIcon:(id)arg1;
+ (id)_prepareImageForDefaultDescriptor:(id)arg1;
+ (id)_systemImageNamed:(id)arg1;
+ (id)_titleForApplicationRecord:(id)arg1 URL:(id)arg2;
+ (id)_workQueue;
+ (void)displayDetailsForJoinMethod:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)displayDetailsForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)imageForRoomType:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)subtitleForURL:(id)arg1 displayedWithTitle:(id)arg2;
+ (id)subtitleForVirtualConference:(id)arg1 displayedWithTitle:(id)arg2;
+ (id)synchronousOutlineIconForURL:(id)arg1 outImageName:(id*)arg2 incomplete:(bool*)arg3;
+ (id)synchronousTitleForURL:(id)arg1 incomplete:(bool*)arg2;

@end
