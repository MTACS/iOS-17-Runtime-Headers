
@protocol EncoderConfigDelegate <NSObject>

@required

- (unsigned int)codecTypeOverride;
- (bool)configureSessionOverride:(struct OpaqueVTCompressionSession { }*)arg1;
- (NSDictionary *)overrideVideoEncoderSpecification;

@end
