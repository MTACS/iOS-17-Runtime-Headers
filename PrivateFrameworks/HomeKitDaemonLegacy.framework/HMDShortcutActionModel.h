
@interface HMDShortcutActionModel : HMDActionModel

@property (retain) NSData *data;

+ (Class)backedObjectClass;
+ (id)properties;

- (void)loadModelWithActionInformation:(id)arg1;

@end
