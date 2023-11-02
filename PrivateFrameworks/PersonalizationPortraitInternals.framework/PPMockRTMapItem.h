
@interface PPMockRTMapItem : NSObject {
    PPMockRTAddress * _address;
    PPMockRTLocation * _location;
    NSString * _name;
}

@property (nonatomic, retain) PPMockRTAddress *address;
@property (nonatomic, retain) PPMockRTLocation *location;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)address;
- (id)location;
- (id)name;
- (void)setAddress:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;

@end
