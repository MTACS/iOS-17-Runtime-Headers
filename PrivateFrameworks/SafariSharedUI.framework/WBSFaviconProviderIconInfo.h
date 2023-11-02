
@interface WBSFaviconProviderIconInfo : NSObject {
    NSString * _UUIDString;
    NSDate * _dateAdded;
    bool  _hasGeneratedResolutions;
    NSString * _iconURLString;
    bool  _isRejectedResource;
    NSString * _pageURLString;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) NSString *UUIDString;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) bool hasGeneratedResolutions;
@property (nonatomic, readonly, copy) NSString *iconURLString;
@property (nonatomic, readonly) bool isRejectedResource;
@property (nonatomic, readonly, copy) NSString *pageURLString;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)UUIDString;
- (id)dateAdded;
- (bool)hasGeneratedResolutions;
- (id)iconURLString;
- (id)init;
- (id)initWithPageURLString:(id)arg1 iconURLString:(id)arg2 UUIDString:(id)arg3 dateAdded:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 hasGeneratedResolutions:(bool)arg6 isRejectedResource:(bool)arg7;
- (bool)isRejectedResource;
- (id)pageURLString;
- (struct CGSize { double x1; double x2; })size;

@end
