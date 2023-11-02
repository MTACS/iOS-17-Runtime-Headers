
@interface CMIVNRPrepareDescriptor : NSObject {
    unsigned long long  _inputHeight;
    unsigned long long  _inputWidth;
}

@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long inputWidth;

- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (void)setInputHeight:(unsigned long long)arg1;
- (void)setInputWidth:(unsigned long long)arg1;

@end
