
@interface TCMPSUpsamplingDescriptor : NSObject {
    unsigned long long  _scale;
}

@property (nonatomic) unsigned long long scale;

- (unsigned long long)scale;
- (void)setScale:(unsigned long long)arg1;

@end
