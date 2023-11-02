
@interface VNImageSourceManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _getOrientationLock;
    NSData * _imageData;
    struct CGImageSource { } * _imageSourceSubsample1;
    struct CGImageSource { } * _imageSourceSubsample2;
    struct CGImageSource { } * _imageSourceSubsample4;
    struct CGImageSource { } * _imageSourceSubsample8;
    NSURL * _imageURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadSubSample1Lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadSubSample2Lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadSubSample4Lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadSubSample8Lock;
    unsigned int  _orientation;
}

- (void).cxx_destruct;
- (struct CGImageSource { }*)_cgImageSourceAtAddress:(struct CGImageSource {}**)arg1 forSubSampleFactor:(unsigned int)arg2 protectedWithUnfairLock:(struct os_unfair_lock_s { unsigned int x1; }*)arg3 operatingInLowPriority:(bool)arg4 error:(id*)arg5;
- (void)dealloc;

@end
