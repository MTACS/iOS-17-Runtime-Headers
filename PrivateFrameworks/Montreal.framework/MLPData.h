
@interface MLPData : NSObject {
    NSData * _classDist;
    unsigned int  _label;
    NSData * _oneHot;
    NSData * _pixels;
}

@property (retain) NSData *classDist;
@property unsigned int label;
@property (retain) NSData *oneHot;
@property (retain) NSData *pixels;

- (void).cxx_destruct;
- (id)classDist;
- (unsigned int)label;
- (id)oneHot;
- (id)pixels;
- (void)setClassDist:(id)arg1;
- (void)setLabel:(unsigned int)arg1;
- (void)setOneHot:(id)arg1;
- (void)setPixels:(id)arg1;

@end
