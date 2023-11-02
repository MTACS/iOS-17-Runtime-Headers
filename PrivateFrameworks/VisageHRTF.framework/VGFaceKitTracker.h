
@interface VGFaceKitTracker : NSObject {
    struct CVAFaceTracking { } * _faceKit;
    struct __CFDictionary { } * _quadSemantics;
    struct __CFDictionary { } * _semantics;
}

- (struct __CFDictionary { }*)buildInputDictionaryWithCaptureData:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)loadFaceKitSemantics;
- (bool)loadQuadFaceKitSemantics;
- (bool)processWithCaptureData:(id)arg1 callback:(id /* block */)arg2;
- (struct __CFDictionary { }*)quadSemantics;
- (struct __CFDictionary { }*)semantics;

@end
