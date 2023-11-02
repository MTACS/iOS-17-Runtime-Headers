
@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (struct CLLocationCoordinate2D { double x1; double x2; })_legacyCoordinateForvCardURL:(id)arg1;
+ (struct CLLocationCoordinate2D { double x1; double x2; })coordinateForvCardURL:(id)arg1 senderContext:(id)arg2;
+ (id)mapSnapshotterQueue;
+ (struct CGSize { double x1; double x2; })mapThumbnailFillSizeForWidth:(double)arg1;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 interfaceStyle:(long long)arg4 error:(id*)arg5;
+ (bool)supportsBlastDoor;
+ (id)titleBarMaskImageForWidth:(double)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 error:(id*)arg3;
+ (id)vCardDataForURL:(id)arg1;
+ (id)vCardURLSForData:(id)arg1;
+ (id)valueForKey:(id)arg1 forURLComponents:(id)arg2;
+ (bool)writesToDisk;

@end
