
@interface SignatureAlignmentTracker : NSObject

+ (bool)ConvertException:(const struct exception { int (**x1)(); }*)arg1 toError:(id*)arg2;
+ (bool)ConvertSystemError:(const struct system_error { int (**x1)(); struct __libcpp_refstring { char *x_2_1_1; } x2; struct error_code { int x_3_1_1; struct error_category {} *x_3_1_2; } x3; }*)arg1 toError:(id*)arg2;
+ (bool)FillUnknownError:(id*)arg1;
+ (id)compareQuerySignature:(id)arg1 withReferenceSignature:(id)arg2 mergeMode:(long long)arg3 error:(id*)arg4;
+ (id)signatureAlignmentFromTrackingResult:(struct TrackingResult { struct TrackingAlignment { struct duration<unsigned int, std::ratio<1, 125>> { unsigned int x_1_2_1; } x_1_1_1; struct duration<unsigned int, std::ratio<1, 125>> { unsigned int x_2_2_1; } x_1_1_2; } x1; struct TrackingAlignment { struct duration<unsigned int, std::ratio<1, 125>> { unsigned int x_1_2_1; } x_2_1_1; struct duration<unsigned int, std::ratio<1, 125>> { unsigned int x_2_2_1; } x_2_1_2; } x2; float x3; })arg1;

@end
