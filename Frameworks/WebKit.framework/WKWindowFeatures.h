
@interface WKWindowFeatures : NSObject <WKObject> {
    struct ObjectStorage<API::WindowFeatures> { 
        struct type { 
            unsigned char __lx[80]; 
        } data; 
    }  _windowFeatures;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) NSNumber *_dialogDisplay;
@property (nonatomic, readonly) NSNumber *_fullscreenDisplay;
@property (nonatomic, readonly) NSNumber *_locationBarVisibility;
@property (nonatomic, readonly) NSNumber *_scrollbarsVisibility;
@property (nonatomic, readonly) NSNumber *allowsResizing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *height;
@property (nonatomic, readonly) NSNumber *menuBarVisibility;
@property (nonatomic, readonly) NSNumber *statusBarVisibility;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *toolbarsVisibility;
@property (nonatomic, readonly) NSNumber *width;
@property (nonatomic, readonly) NSNumber *x;
@property (nonatomic, readonly) NSNumber *y;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_dialogDisplay;
- (id)_fullscreenDisplay;
- (id)_locationBarVisibility;
- (id)_scrollbarsVisibility;
- (id)allowsResizing;
- (void)dealloc;
- (id)height;
- (id)menuBarVisibility;
- (id)statusBarVisibility;
- (id)toolbarsVisibility;
- (id)width;
- (id)x;
- (id)y;

@end
