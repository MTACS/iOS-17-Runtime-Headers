
@interface _UIOldCGImageDecompressor : _UICGImageDecompressor {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _decompressionLock;
    struct { 
        unsigned int metadataFinished : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int decompressionFinished : 1; 
        unsigned int cache : 1; 
    }  _decompressorFlags;
    NSData * _imageData;
    struct CGImage { } * _imageRef;
    unsigned long long  _jpegDecodeRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _metadataLock;
    unsigned long long  _renderingIntent;
}

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGImage { }*)waitForImageRef;

@end
