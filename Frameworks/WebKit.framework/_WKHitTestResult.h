
@interface _WKHitTestResult : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::HitTestResult> { 
        struct type { 
            unsigned char __lx[328]; 
        } data; 
    }  _hitTestResult;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSURL *absoluteImageURL;
@property (nonatomic, readonly, copy) NSURL *absoluteLinkURL;
@property (nonatomic, readonly, copy) NSURL *absoluteMediaURL;
@property (nonatomic, readonly, copy) NSURL *absolutePDFURL;
@property (getter=isContentEditable, nonatomic, readonly) bool contentEditable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementBoundingBox;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *linkLabel;
@property (nonatomic, readonly, copy) NSString *linkTitle;
@property (nonatomic, readonly, copy) NSString *lookupText;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)absoluteImageURL;
- (id)absoluteLinkURL;
- (id)absoluteMediaURL;
- (id)absolutePDFURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBoundingBox;
- (bool)isContentEditable;
- (id)linkLabel;
- (id)linkTitle;
- (id)lookupText;

@end
