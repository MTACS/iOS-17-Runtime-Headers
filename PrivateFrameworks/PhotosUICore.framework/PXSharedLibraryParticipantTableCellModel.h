
@interface PXSharedLibraryParticipantTableCellModel : PXObservable {
    NSString * _address;
    bool  _ellipsisButtonAllowed;
    UIImage * _image;
    NSString * _name;
    bool  _removeButtonVisible;
    long long  _requestID;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly) bool ellipsisButtonAllowed;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool removeButtonVisible;
@property (nonatomic, readonly) long long requestID;

+ (double)imageDiameter;
+ (double)imageInset;
+ (double)imageVerticalInset;

- (void).cxx_destruct;
- (id)address;
- (void)configureForParticipant:(id)arg1 displayScale:(double)arg2 isRTL:(bool)arg3;
- (bool)ellipsisButtonAllowed;
- (id)image;
- (id)init;
- (id)name;
- (bool)removeButtonVisible;
- (long long)requestID;
- (void)setAddress:(id)arg1;
- (void)setEllipsisButtonAllowed:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRequestID:(long long)arg1;

@end
