
@interface CSUDetectionPrintShape : NSObject {
    unsigned long long  _channels;
    unsigned long long  _height;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long channels;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long width;

- (unsigned long long)channels;
- (unsigned long long)height;
- (id)initWithHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 channels:(unsigned long long)arg3;
- (void)setChannels:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
