
@protocol CRKFileDescriptor <NSObject>

@required

- (bool)changeFlags:(unsigned int)arg1 error:(id*)arg2;
- (void)close;
- (bool)fetchFlags:(unsigned int*)arg1 error:(id*)arg2;
- (int)rawValue;

@end
