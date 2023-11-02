
@interface RPStatusDevice : NSObject <NSSecureCoding> {
    RPCompanionLinkDevice * _device;
    NSMutableDictionary * _statusInfoMap;
    NSMutableDictionary * _statusStateMap;
}

@property (nonatomic, readonly) RPCompanionLinkDevice *device;
@property (nonatomic, retain) NSMutableDictionary *statusInfoMap;
@property (nonatomic, retain) NSMutableDictionary *statusStateMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)getIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)setStatusInfoMap:(id)arg1;
- (void)setStatusStateMap:(id)arg1;
- (id)statusInfoMap;
- (id)statusStateMap;

@end
