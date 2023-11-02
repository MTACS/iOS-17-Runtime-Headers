
@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying> {
    NSDictionary * _defaultFormat;
    NSArray * _supportedFormats;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *defaultFormat;
@property (nonatomic, readonly) _MRVoiceInputDeviceDescriptorProtobuf *protobuf;
@property (nonatomic, readonly) NSArray *supportedFormats;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)defaultFormat;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)protobuf;
- (id)supportedFormats;

@end
