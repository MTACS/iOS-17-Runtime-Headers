
@interface TRIPBBytesValue : TRIPBMessage

@property (nonatomic, copy) NSData *value;

+ (id)descriptor;

@end
