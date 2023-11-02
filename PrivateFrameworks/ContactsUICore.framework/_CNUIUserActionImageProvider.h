
@interface _CNUIUserActionImageProvider : NSObject <CNUIUserActionImageProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)imageForActionType:(id)arg1 imageStyle:(long long)arg2;
+ (id)imageResourceNameForActionType:(id)arg1;
+ (id)symbolImageNameForActionType:(id)arg1;
+ (id)symbolOulinedImageNameForActionType:(id)arg1;

@end
