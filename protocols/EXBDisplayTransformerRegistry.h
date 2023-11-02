
@protocol EXBDisplayTransformerRegistry <NSObject>

@required

- (<BSInvalidatable> *)addTransformer:(id <FBSDisplayTransformer>)arg1 withIdentifier:(NSString *)arg2;

@end
