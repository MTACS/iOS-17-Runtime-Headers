
@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (nonatomic) int divot;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic) int typeInformationDescriptor;

- (int)divot;
- (id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3;
- (void)setDivot:(int)arg1;
- (void)setSourceID:(id)arg1;
- (void)setTypeInformationDescriptor:(int)arg1;
- (id)sourceID;
- (int)typeInformationDescriptor;

@end
