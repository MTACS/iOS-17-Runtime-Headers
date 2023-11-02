
@interface CMIOExtensionDeviceProperties : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _propertiesDictionary;
}

@property (retain) NSString *linkedCoreAudioDeviceUID;
@property (retain) NSString *model;
@property (copy) NSDictionary *propertiesDictionary;
@property (retain) NSNumber *suspended;
@property (retain) NSNumber *transportType;

+ (id)devicePropertiesWithDictionary:(id)arg1;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPropertyValues:(id)arg1;
- (id)linkedCoreAudioDeviceUID;
- (id)model;
- (id)propertiesDictionary;
- (void)setLinkedCoreAudioDeviceUID:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPropertiesDictionary:(id)arg1;
- (void)setPropertyState:(id)arg1 forProperty:(id)arg2;
- (void)setSuspended:(id)arg1;
- (void)setTransportType:(id)arg1;
- (id)suspended;
- (id)transportType;

@end
