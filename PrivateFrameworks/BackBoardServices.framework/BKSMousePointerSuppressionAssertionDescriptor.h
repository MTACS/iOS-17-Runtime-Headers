
@interface BKSMousePointerSuppressionAssertionDescriptor : NSObject {
    unsigned long long  _suppressionOptions;
}

@property (nonatomic) unsigned long long suppressionOptions;

- (void)setSuppressionOptions:(unsigned long long)arg1;
- (unsigned long long)suppressionOptions;

@end
