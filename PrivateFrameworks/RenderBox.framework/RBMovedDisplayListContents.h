
@interface RBMovedDisplayListContents : NSObject <_RBDisplayListContents> {
    struct refcounted_ptr<RB::DisplayList::Contents> { 
        struct Contents {} *_p; 
    }  _contents;
    struct unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> { 
        struct __compressed_pair<RB::XML::Document *, std::default_delete<RB::XML::Document>> { 
            struct Document {} *__value_; 
        } __ptr_; 
    }  _xml_document;
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
