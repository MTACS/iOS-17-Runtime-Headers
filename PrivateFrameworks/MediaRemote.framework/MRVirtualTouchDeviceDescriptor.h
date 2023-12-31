
@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying> {
    bool  _absolute;
    bool  _integratedDisplay;
    union _MRHIDSize { 
        struct { 
            float width; 
            float height; 
        } ; 
        float data[2]; 
    }  _screenSize;
}

@property (getter=isAbsolute, nonatomic, readonly) bool absolute;
@property (getter=isIntegratedDisplay, nonatomic, readonly) bool integratedDisplay;
@property (nonatomic, readonly) union _MRHIDSize { struct { float x_1_1_1; float x_1_1_2; } x1; float x2[2]; } screenSize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isAbsolute;
- (bool)isIntegratedDisplay;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (union _MRHIDSize { struct { float x_1_1_1; float x_1_1_2; } x1; float x2[2]; })screenSize;

@end
