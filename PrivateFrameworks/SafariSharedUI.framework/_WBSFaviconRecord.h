
@interface _WBSFaviconRecord : NSObject {
    NSData * _iconData;
    NSURL * _iconURL;
    bool  _isPrivate;
    NSURL * _originalPageURL;
    NSURL * _pageURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) NSData *iconData;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly) NSURL *originalPageURL;
@property (nonatomic, readonly) NSURL *pageURL;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)new;

- (void).cxx_destruct;
- (id)iconData;
- (id)iconURL;
- (id)init;
- (id)initWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 iconData:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 isPrivate:(bool)arg6;
- (bool)isPrivate;
- (id)originalPageURL;
- (id)pageURL;
- (struct CGSize { double x1; double x2; })size;

@end
