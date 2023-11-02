
@interface CBSystemHealthBluetooth : NSObject {
    unsigned long long  componentType;
}

@property (nonatomic) unsigned long long componentType;

- (unsigned long long)componentType;
- (unsigned long long)getComponentStatusWithError:(id*)arg1;
- (id)init;
- (id)initWithComponentType:(unsigned long long)arg1;
- (void)setComponentType:(unsigned long long)arg1;

@end
