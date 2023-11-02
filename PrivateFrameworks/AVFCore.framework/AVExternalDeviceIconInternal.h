
@interface AVExternalDeviceIconInternal : NSObject {
    NSData * _data;
    bool  _prerendered;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@end
