
@interface GTVMBufferSubRegion_tools_diagnostics : NSObject <GTVMBufferSubRegion> {
    GTVMBuffer_tools_diagnostics * _parent;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)GTGPUToolsData;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithGTVMBuffer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
