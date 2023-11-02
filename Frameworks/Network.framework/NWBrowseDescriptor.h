
@interface NWBrowseDescriptor : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_browse_descriptor> * _internalDescriptor;
}

@property (nonatomic, readonly) NSString *bonjourServiceDomain;
@property (nonatomic, readonly) NSString *bonjourServiceType;
@property (nonatomic, retain) NSObject<OS_nw_browse_descriptor> *internalDescriptor;
@property (nonatomic, readonly, copy) NSString *privateDescription;

+ (Class)copyClassForDescriptorType:(int)arg1;
+ (unsigned int)descriptorType;
+ (id)descriptorWithInternalDescriptor:(id)arg1;
+ (id)descriptorWithProtocolBufferData:(id)arg1;
+ (bool)supportsBrowseCallback;

- (void).cxx_destruct;
- (id)bonjourServiceDomain;
- (id)bonjourServiceType;
- (void)browseWithCompletionHandler:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtocolBufferObject;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)encodedData;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)internalDescriptor;
- (id)privateDescription;
- (void)setInternalDescriptor:(id)arg1;

@end
