
@protocol DBGValueJSONSerialization <NSObject>

@required

+ (id)valueWithEncodedValue:(id)arg1 format:(NSString *)arg2 error:(id*)arg3;

- (id)JSONCompatibleRepresentation;

@end
