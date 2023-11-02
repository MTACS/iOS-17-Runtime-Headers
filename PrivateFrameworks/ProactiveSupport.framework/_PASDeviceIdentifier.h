
@interface _PASDeviceIdentifier : NSObject {
    NSString * _path;
}

@property (readonly) NSUUID *UUID;

- (void).cxx_destruct;
- (id)UUID;
- (id)init;
- (id)initWithBasePath:(id)arg1;
- (void)reset;

@end
