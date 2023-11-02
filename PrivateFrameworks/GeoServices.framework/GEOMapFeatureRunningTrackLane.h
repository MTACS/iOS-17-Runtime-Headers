
@interface GEOMapFeatureRunningTrackLane : NSObject {
    NSArray * _coordinates;
    unsigned int  _flowlineOffset;
    unsigned long long  _type;
    unsigned int  _width;
}

@property (nonatomic, readonly) NSArray *coordinates;
@property (nonatomic, readonly) unsigned int flowlineOffset;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned int width;

- (void).cxx_destruct;
- (id)coordinates;
- (id)description;
- (unsigned int)flowlineOffset;
- (id)initWithVMP4Lane:(const void*)arg1 coordinates:(id)arg2;
- (unsigned long long)type;
- (unsigned int)width;

@end
