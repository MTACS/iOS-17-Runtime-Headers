
@interface TRIPBMessageOptions : TRIPBMessage

@property (nonatomic) bool deprecated;
@property (nonatomic) bool hasDeprecated;
@property (nonatomic) bool hasMapEntry;
@property (nonatomic) bool hasMessageSetWireFormat;
@property (nonatomic) bool hasNoStandardDescriptorAccessor;
@property (nonatomic) bool mapEntry;
@property (nonatomic) bool messageSetWireFormat;
@property (nonatomic) bool noStandardDescriptorAccessor;
@property (nonatomic, retain) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
