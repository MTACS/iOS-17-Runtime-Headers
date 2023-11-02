
@interface RBInterpolatedDisplayListContents : NSObject <_RBDisplayListContents> {
    struct objc_ptr<id<_RBDisplayListContents>> { 
        <_RBDisplayListContents> *_p; 
    }  _contents;
    double  _contentsScale;
    struct spin_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _contents_lock;
    struct objc_ptr<RBDisplayListInterpolator *> { 
        RBDisplayListInterpolator *_p; 
    }  _interp;
    float  _progress;
}

@property (nonatomic, readonly) const void*_rb_contents;
@property (nonatomic, readonly) const void*_rb_xml_document;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *xmlDescription;

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_drawInState:(struct _RBDrawingState { }*)arg1 alpha:(float)arg2;
- (const void*)_rb_contents;
- (const void*)_rb_xml_document;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)debugDescription;
- (void)drawInState:(struct _RBDrawingState { }*)arg1;
- (id)encodedDataForDelegate:(id)arg1 error:(id*)arg2;
- (bool)isEmpty;
- (void)renderInContext:(struct CGContext { }*)arg1 options:(id)arg2;
- (id)xmlDescription;

@end
