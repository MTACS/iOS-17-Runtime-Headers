
@protocol RFOptionalBool <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
