
@interface CVAPhotoExceptionMetalResourceUnavailable : CVAPhotoExceptionBase

+ (id)error;
+ (id)throwIfNil:(id)arg1;

- (int)getErrorCode;
- (id)getReasonStr;
- (id)init;

@end
