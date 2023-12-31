
@interface EspressoBrickTensorShape : NSObject {
    int  _batch;
    int  _channels;
    int  _height;
    int  _rank;
    int  _sequence;
    int  _width;
}

@property int batch;
@property int channels;
@property int height;
@property int rank;
@property int sequence;
@property int width;

- (int)batch;
- (int)channels;
- (int)height;
- (int)rank;
- (int)sequence;
- (void)setBatch:(int)arg1;
- (void)setChannels:(int)arg1;
- (void)setHeight:(int)arg1;
- (void)setRank:(int)arg1;
- (void)setSequence:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)width;

@end
