
@protocol NFTagB

@required

- (NSData *)applicationData;
- (bool)applicationDataCoding;
- (NSData *)pupi;
- (NSData *)selectedAID;
- (unsigned char)sfgi;
- (double)sfgt;

@end
