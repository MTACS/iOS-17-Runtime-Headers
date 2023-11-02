
@interface TRIPBMixin : TRIPBMessage

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *root;

+ (id)descriptor;

@end
