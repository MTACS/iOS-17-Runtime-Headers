
@interface GEOStorefrontImagery : NSObject {
    unsigned short  _bucketId;
    unsigned int  _buildId;
    NSArray * _cameras;
    unsigned int  _dataFormatVersion;
    double  _groundAltitude;
    unsigned long long  _identifier;
    struct GEOOrientedPosition { 
        struct { 
            double x; 
            double y; 
            double z; 
        } position; 
        float yaw; 
        float pitch; 
        float roll; 
    }  _position;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) unsigned short bucketId;
@property (nonatomic, readonly) unsigned int buildId;
@property (nonatomic, readonly) NSArray *cameras;
@property (nonatomic, readonly) unsigned int dataFormatVersion;
@property (nonatomic, readonly) double groundAltitude;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) struct GEOOrientedPosition { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; float x2; float x3; float x4; } position;
@property (nonatomic, readonly) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned short)bucketId;
- (unsigned int)buildId;
- (id)cameras;
- (unsigned int)dataFormatVersion;
- (double)groundAltitude;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithPhotoPosition:(id)arg1;
- (struct GEOOrientedPosition { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; float x2; float x3; float x4; })position;
- (unsigned long long)timestamp;

@end
