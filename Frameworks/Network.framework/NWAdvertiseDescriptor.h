
@interface NWAdvertiseDescriptor : NSObject {
    NSObject<OS_nw_advertise_descriptor> * _internalDescriptor;
}

@property (nonatomic, readonly) NSString *bonjourServiceDomain;
@property (nonatomic, readonly) NSString *bonjourServiceName;
@property (nonatomic, readonly) NSString *bonjourServiceType;
@property (nonatomic, retain) NSObject<OS_nw_advertise_descriptor> *internalDescriptor;
@property (nonatomic, retain) NSData *txtRecord;

- (void).cxx_destruct;
- (id)bonjourServiceDomain;
- (id)bonjourServiceName;
- (id)bonjourServiceType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)internalDescriptor;
- (id)privateDescription;
- (void)setInternalDescriptor:(id)arg1;
- (void)setTxtRecord:(id)arg1;
- (id)txtRecord;

@end
