
@interface SAWebImageResult : SAWebWebResult

@property (nonatomic, copy) NSNumber *fileSize;
@property (nonatomic, retain) SAWebAcePicture *picture;
@property (nonatomic, copy) NSArray *thumbNails;

+ (id)imageResult;
+ (id)imageResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fileSize;
- (id)groupIdentifier;
- (id)picture;
- (void)setFileSize:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setThumbNails:(id)arg1;
- (id)thumbNails;

@end
