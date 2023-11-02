
@interface WebGeolocationPositionInternal : NSObject {
    struct GeolocationPositionData { 
        double timestamp; 
        double latitude; 
        double longitude; 
        double accuracy; 
        struct optional<double> { 
            union { 
                BOOL __null_state_; 
                double __val_; 
            } ; 
            bool __engaged_; 
        } altitude; 
        struct optional<double> { 
            union { 
                BOOL __null_state_; 
                double __val_; 
            } ; 
            bool __engaged_; 
        } altitudeAccuracy; 
        struct optional<double> { 
            union { 
                BOOL __null_state_; 
                double __val_; 
            } ; 
            bool __engaged_; 
        } heading; 
        struct optional<double> { 
            union { 
                BOOL __null_state_; 
                double __val_; 
            } ; 
            bool __engaged_; 
        } speed; 
        struct optional<double> { 
            union { 
                BOOL __null_state_; 
                double __val_; 
            } ; 
            bool __engaged_; 
        } floorLevel; 
    }  _position;
}

- (id).cxx_construct;
- (id)initWithCoreGeolocationPosition:(void*)arg1;

@end
