
@interface CIRenderTask : NSObject {
    void * _priv;
}

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (id)rendertaskWithInternalTask:(void*)arg1;

- (id)_pdfDataRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithInternalTask:(void*)arg1;
- (void*)internalRepresentation;
- (id)waitUntilCompletedAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)nu_waitUntilCompletedAndReturnError:(out id*)arg1;

@end
