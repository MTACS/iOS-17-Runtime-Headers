
@interface MXMOSLogDevice_Internal : NSObject <MXMProbeableDevice> {
    NSString * _identifier;
    NSString * _name;
    OSLogDevice * _rawDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) OSLogDevice *rawDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (id)initWithOSLogDevice:(id)arg1;
- (id)name;
- (id)rawDevice;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRawDevice:(id)arg1;

@end
