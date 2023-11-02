
@interface ISGraphicSymbolResource : NSObject <ISScalableCompositorResource> {
    IFGraphicSymbolDescriptor * _descriptor;
    NSString * _symbolName;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) IFGraphicSymbolDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSString *symbolName;
@property (readonly) NSURL *url;

+ (id)defaultResource;
+ (id)graphicSymbolResourceWithConfiguration:(id)arg1 symbolName:(id)arg2 url:(id)arg3;
+ (id)graphicSymbolResourceWithRecipe:(id)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)descriptor;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithGraphicSymbolDescriptor:(id)arg1 symbolName:(id)arg2 url:(id)arg3;
- (void)setDescriptor:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;
- (void)updateDescriptorWithImageDescriptor:(id)arg1;
- (id)url;

@end
