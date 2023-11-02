
@interface MSCMSAppleExpirationTimeAttribute : NSObject <MSCMSAttributeCoder> {
    NSDate * _expirationTime;
}

@property (readonly, retain) MSOID *attributeType;
@property (readonly, retain) NSDate *expirationTime;

- (void).cxx_destruct;
- (id)attributeType;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)expirationTime;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithExpirationTime:(id)arg1;

@end
