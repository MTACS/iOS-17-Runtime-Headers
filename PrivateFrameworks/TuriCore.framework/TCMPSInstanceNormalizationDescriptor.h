
@interface TCMPSInstanceNormalizationDescriptor : NSObject {
    unsigned long long  _channels;
    NSString * _label;
    unsigned long long  _styles;
}

@property (nonatomic) unsigned long long channels;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long styles;

- (void).cxx_destruct;
- (unsigned long long)channels;
- (id)init;
- (id)label;
- (void)setChannels:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setStyles:(unsigned long long)arg1;
- (unsigned long long)styles;

@end
