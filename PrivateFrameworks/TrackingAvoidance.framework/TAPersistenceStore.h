
@interface TAPersistenceStore : NSObject <NSSecureCoding> {
    TADeviceRecord * _deviceRecord;
    TAVisitState * _visitState;
}

@property (nonatomic, retain) TADeviceRecord *deviceRecord;
@property (nonatomic, retain) TAVisitState *visitState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceRecord;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDeviceRecord:(id)arg1;
- (void)setVisitState:(id)arg1;
- (id)visitState;

@end
