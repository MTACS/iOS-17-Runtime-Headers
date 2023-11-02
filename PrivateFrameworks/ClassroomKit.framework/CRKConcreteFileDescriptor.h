
@interface CRKConcreteFileDescriptor : NSObject <CRKFileDescriptor> {
    NSNumber * _backingValue;
}

@property (nonatomic, retain) NSNumber *backingValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int rawValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingValue;
- (bool)changeFlags:(unsigned int)arg1 error:(id*)arg2;
- (void)close;
- (void)dealloc;
- (bool)fetchFlags:(unsigned int*)arg1 error:(id*)arg2;
- (id)initWithRawValue:(int)arg1;
- (int)rawValue;
- (void)setBackingValue:(id)arg1;

@end
